#include "Sparta_Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "SpartaPlayerController.h"
#include "GameFramework/FloatingPawnMovement.h"

ASparta_Pawn::ASparta_Pawn()
{
 	PrimaryActorTick.bCanEverTick = false;

	RootSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	SetRootComponent(RootSceneComp);

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	CapsuleComp->SetupAttachment(RootSceneComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(CapsuleComp);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(CapsuleComp);
	MeshComp->SetSimulatePhysics(false);

	MoveSpeed = 400.0f;
	InclineSpeed = 90.f;
}

void ASparta_Pawn::BeginPlay()
{
	Super::BeginPlay();

}

void ASparta_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ASpartaPlayerController* PlayerController = Cast<ASpartaPlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::Move
				);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::Look
				);
			}
			if (PlayerController->UpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->UpAction,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::Up
				);
			}
			if (PlayerController->DownAction)
			{
				EnhancedInput->BindAction(
					PlayerController->DownAction,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::Down
				);
			}
			if (PlayerController->InclineUp)
			{
				EnhancedInput->BindAction(
					PlayerController->InclineUp,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::InclineUp
				);
			}
			if (PlayerController->InclineDown)
			{
				EnhancedInput->BindAction(
					PlayerController->InclineDown,
					ETriggerEvent::Triggered,
					this,
					&ASparta_Pawn::InclineDown
				);
			}
		}
	}
}

void ASparta_Pawn::Move(const FInputActionValue& value)
{
	const FVector2D Input = value.Get<FVector2D>();

	if (!Input.IsNearlyZero())
	{
		const float Delta = MoveSpeed * GetWorld()->GetDeltaSeconds();

		const FVector LocalOffset(Input.Y * Delta, Input.X * Delta, 0.f);

		AddActorLocalOffset(LocalOffset, true);
	}
}

void ASparta_Pawn::Look(const FInputActionValue& value)
{
	const FVector2D LookInput = value.Get<FVector2D>();

	if (!LookInput.IsNearlyZero())
	{
		const FRotator YawRotation(0.f, LookInput.X, 0.f);

		AddActorLocalRotation(YawRotation, true);

		FRotator ArmRot = SpringArmComp->GetRelativeRotation();
		ArmRot.Pitch = FMath::Clamp(ArmRot.Pitch + (-LookInput.Y), -80.f, +80.f);
		SpringArmComp->SetRelativeRotation(ArmRot);
	}
}

void ASparta_Pawn::Up(const FInputActionValue& value)
{
	float Axis = value.Get<float>();
	if (FMath::IsNearlyZero(Axis)) return;

	float Delta = MoveSpeed * GetWorld()->GetDeltaSeconds();
	AddActorLocalOffset(FVector::UpVector * Axis * Delta, true);
}

void ASparta_Pawn::Down(const FInputActionValue& value)
{
	float Axis = value.Get<float>();
	if (FMath::IsNearlyZero(Axis)) return;

	float Delta = MoveSpeed * GetWorld()->GetDeltaSeconds() * -1;
	AddActorLocalOffset(FVector::UpVector * Axis * Delta, true);
}

void ASparta_Pawn::InclineUp(const FInputActionValue& value)
{
	float Axis = value.Get<float>();

	float DeltaRot = InclineSpeed * Axis * GetWorld()->GetDeltaSeconds();

	FRotator CurrentRot = GetActorRotation();
	CurrentRot.Pitch -= DeltaRot;

	SetActorRotation(CurrentRot);
}

void ASparta_Pawn::InclineDown(const FInputActionValue& value)
{
	float Axis = value.Get<float>();

	float DeltaRot = InclineSpeed * Axis * GetWorld()->GetDeltaSeconds();

	FRotator CurrentRot = GetActorRotation();
	CurrentRot.Pitch += DeltaRot;

	SetActorRotation(CurrentRot);
}

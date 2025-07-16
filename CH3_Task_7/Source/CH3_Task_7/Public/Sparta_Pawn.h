#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Sparta_Pawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class CH3_TASK_7_API ASparta_Pawn : public APawn
{
	GENERATED_BODY()

public:
	ASparta_Pawn();

protected:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float InclineSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;
	UPROPERTY()
	USceneComponent* RootSceneComp;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void Up(const FInputActionValue& value);
	UFUNCTION()
	void Down(const FInputActionValue& value);
	UFUNCTION()
	void InclineUp(const FInputActionValue& value);
	UFUNCTION()
	void InclineDown(const FInputActionValue& value);

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

#include "SpartaPlayerController.h"
#include "EnhancedInputSubsystems.h"

ASpartaPlayerController::ASpartaPlayerController()
	:IMC(nullptr), 
	MoveAction(nullptr),
	LookAction(nullptr),
	UpAction(nullptr),
	DownAction(nullptr),
	InclineUp(nullptr),
	InclineDown(nullptr)
{

}

void ASpartaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if(ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if(UEnhancedInputLocalPlayerSubsystem* SubSystem = 
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if(IMC)
			{
				SubSystem->AddMappingContext(IMC, 0);
			}
		}
	}
}

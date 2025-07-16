#include "SpartaGameModeBase.h"
#include "Sparta_Pawn.h"
#include "SpartaPlayerController.h"

ASpartaGameModeBase::ASpartaGameModeBase()
{
	DefaultPawnClass = ASpartaGameModeBase::StaticClass();
	PlayerControllerClass = ASpartaPlayerController::StaticClass();
}

#include "OTWDPlayerController.h"
#include "OTWDCheatManager.h"
#include "Templates/SubclassOf.h"

AOTWDPlayerController::AOTWDPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UOTWDCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}

TSubclassOf<UGameplayAbility> AOTWDPlayerController::GetToolAbility() {
    return NULL;
}

TSubclassOf<UGameplayAbility> AOTWDPlayerController::GetSignatureAbility() {
    return NULL;
}

TSubclassOf<UGameplayAbility> AOTWDPlayerController::GetSecondaryAbility() {
    return NULL;
}

TSubclassOf<UGameplayAbility> AOTWDPlayerController::GetDefenceAbility() {
    return NULL;
}



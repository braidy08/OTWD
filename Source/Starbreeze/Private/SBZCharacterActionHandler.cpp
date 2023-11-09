#include "SBZCharacterActionHandler.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void USBZCharacterActionHandler::SetActionForbidden(const TSubclassOf<USBZBaseAction> InActionType, bool bInIsForbidden) {
}

USBZBaseAction* USBZCharacterActionHandler::SetActionEnabled(const FName InActionName, bool bInIsEnabled, bool bGracefully) {
    return NULL;
}

bool USBZCharacterActionHandler::IsActionEnabled(TSubclassOf<USBZBaseAction> ActionType) const {
    return false;
}

USBZBaseAction* USBZCharacterActionHandler::GetAction(const TSubclassOf<USBZBaseAction> ActionType) const {
    return NULL;
}

void USBZCharacterActionHandler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZCharacterActionHandler, NetworkedActionArray);
}

USBZCharacterActionHandler::USBZCharacterActionHandler() {
}


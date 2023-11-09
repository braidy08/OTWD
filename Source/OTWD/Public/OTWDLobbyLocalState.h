#pragma once
#include "CoreMinimal.h"
#include "SBZLobbyLocalState.h"
#include "ESBZRewardType.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDLobbyLocalState.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API UOTWDLobbyLocalState : public USBZLobbyLocalState {
    GENERATED_BODY()
public:
    UOTWDLobbyLocalState();
    UFUNCTION(BlueprintCallable)
    void OpenWeaponReward(const FOTWDWeaponSavedData& WeaponSavedData, const ESBZRewardType& RewardType, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void OpenWeaponPartReward(const FOTWDWeaponPartSavedData& PartSavedData, const ESBZRewardType& RewardType, bool bNotify);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUpdatedStats();
    
    UFUNCTION(BlueprintCallable)
    void NotifyOpenedRewards();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStateLeft(FName LeftState);
    
};


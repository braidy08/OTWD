#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "SBZChallengeManager.h"
#include "EChallengeName.h"
#include "OTWDObjectiveEvent.h"
#include "OTWDChallengeManager.generated.h"

class UOTWDChallengeSchematic;
class USBZPlayerDefeatHandler;

UCLASS(Blueprintable)
class OTWD_API UOTWDChallengeManager : public USBZChallengeManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDChallengeSchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatHandler* DefeatHandler;
    
public:
    UOTWDChallengeManager();
    UFUNCTION(BlueprintCallable)
    void UpdateObjectiveChallenges(const FOTWDObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable)
    void Progress(EChallengeName Name, int32 Collected, bool bSaveImmediately);
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWeaponToPawnSlot(ESBZWeaponRarity Rarity);
    
};


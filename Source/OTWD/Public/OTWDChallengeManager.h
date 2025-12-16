#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZChallengeManager -FallbackName=SBZChallengeManager
#include "EChallengeName.h"
#include "OTWDObjectiveEvent.h"
#include "OTWDChallengeManager.generated.h"

class UOTWDChallengeSchematic;
class USBZContentPack;
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
    void SetProgressStep(EChallengeName Name, uint8 StepIndex, bool bSaveImmediately, const USBZContentPack* ContentPack);
    
    UFUNCTION(BlueprintCallable)
    void Progress(EChallengeName Name, int32 Collected, bool bSaveImmediately, const USBZContentPack* ContentPack);
    
    UFUNCTION(BlueprintCallable)
    void OnAssignWeaponToPawnSlot(ESBZWeaponRarity Rarity);
    
};


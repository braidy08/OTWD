#pragma once
#include "CoreMinimal.h"
#include "SBZMissionReward.h"
#include "OTWDWeaponPartRewardCustom.h"
#include "OTWDWeaponPartRewardRarityOverride.h"
#include "OTWDWeaponPartRewardGenerator.generated.h"

class USBZWeaponPartDataCollection;

UCLASS(Blueprintable)
class OTWD_API UOTWDWeaponPartRewardGenerator : public USBZMissionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDWeaponPartRewardRarityOverride RarityWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartDataCollection*> WeaponPartDataCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDWeaponPartRewardCustom> CustomWeaponPartDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssignableMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssignableEquippedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquippedMultiplier;
    
    UOTWDWeaponPartRewardGenerator();
};


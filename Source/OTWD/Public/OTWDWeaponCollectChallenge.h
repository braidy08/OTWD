#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OTWDChallengeBase.h"
#include "OTWDWeaponCollectChallenge.generated.h"

class USBZWeaponData;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponCollectChallenge : public FOTWDChallengeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponData*> CorrespondingWeaponDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity WeaponRarity;
    
    FOTWDWeaponCollectChallenge();
};


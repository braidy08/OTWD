#pragma once
#include "CoreMinimal.h"
#include "EOTWDMetagameUpgradeRequirements.h"
#include "OTWDMetagameUpgradeRequirements.generated.h"

class UOTWDMetagameSurvivorClassDataAsset;

USTRUCT(BlueprintType)
struct FOTWDMetagameUpgradeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDMetagameUpgradeRequirements RequirementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSurvivorClassDataAsset* SurvivorClassRequirement;
    
    OTWD_API FOTWDMetagameUpgradeRequirements();
};


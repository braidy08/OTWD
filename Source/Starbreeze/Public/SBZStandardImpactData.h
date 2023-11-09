#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBaseImpactData.h"
#include "SBZStandardImpactData.generated.h"

USTRUCT(BlueprintType)
struct FSBZStandardImpactData : public FSBZBaseImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DecalScale;
    
    STARBREEZE_API FSBZStandardImpactData();
};


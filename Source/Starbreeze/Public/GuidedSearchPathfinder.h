#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathPathfinder.h"
#include "GuidedSearchPathfinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UGuidedSearchPathfinder : public UPathPathfinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FunnelingFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval PrimaryPathCostModifierRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval DesiredGuideCountRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugForceUniqueConnections;
    
    UGuidedSearchPathfinder();
};


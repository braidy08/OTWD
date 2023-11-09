#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathPathfinder.h"
#include "CostConstrainedPathfinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UCostConstrainedPathfinder : public UPathPathfinder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval DesiredCostRange;
    
    UCostConstrainedPathfinder();
};


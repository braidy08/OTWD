#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathPathfinder.h"
#include "WanderingShortestPathfinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UWanderingShortestPathfinder : public UPathPathfinder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval CostModifierRange;
    
    UWanderingShortestPathfinder();
};


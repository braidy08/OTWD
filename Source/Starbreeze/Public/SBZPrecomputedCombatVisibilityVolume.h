#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBZPrecomputedCombatVisibilityVolume.generated.h"

class ASBZPrecomputedCombatVisibilityVolume;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPrecomputedCombatVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeVisibilityToAllVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZPrecomputedCombatVisibilityVolume*> ConnectedVisibilityVolumes;
    
    ASBZPrecomputedCombatVisibilityVolume();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineBeaconHostObject.h"
#include "SBZBeaconActionPhaseHost.generated.h"

class APlayerState;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZBeaconActionPhaseHost : public ASBZOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ASBZBeaconActionPhaseHost();
    UFUNCTION(BlueprintCallable)
    void HandlePlayerCountChanged(APlayerState* PlayerState);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZProximitySensorNavLinkProxy.h"
#include "SBZLadderNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLadderNavLinkProxy : public ASBZProximitySensorNavLinkProxy {
    GENERATED_BODY()
public:
    ASBZLadderNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void SetBeingClimbed(bool bInBeingClimbed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInForcedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingClimbed() const;
    
};


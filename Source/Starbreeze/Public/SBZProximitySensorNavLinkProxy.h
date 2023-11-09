#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "SBZProximitySensorNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZProximitySensorNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesactivationCoolDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDesactivationCoolDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesactivationCoolDownDurationOverride;
    
public:
    ASBZProximitySensorNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void UpdateCoolDownTimer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkPathfindingAllowed(bool bInLinkPathfindingAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCoolDownTimer(float InCurrentCoolDownTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInForcedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesactivationCoolDownDuration() const;
    
};


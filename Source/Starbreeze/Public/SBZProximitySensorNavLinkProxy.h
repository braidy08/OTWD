#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
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
    ASBZProximitySensorNavLinkProxy(const FObjectInitializer& ObjectInitializer);

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


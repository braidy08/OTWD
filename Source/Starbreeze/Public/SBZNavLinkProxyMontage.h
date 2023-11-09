#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "SBZNavLinkProxyMontage.generated.h"

class ASBZAICharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNavLinkProxyMontage : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* Visitor;
    
public:
    ASBZNavLinkProxyMontage();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayMontage(ASBZAICharacter* Character);
    
};


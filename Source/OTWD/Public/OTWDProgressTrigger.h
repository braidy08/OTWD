#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDProgressTrigger.generated.h"

class AOTWDProgressTrigger;

UCLASS(Blueprintable)
class OTWD_API AOTWDProgressTrigger : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggeredSingature, AOTWDProgressTrigger*, Trigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriggeredSingature OnTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnPlayerEnter;
    
    AOTWDProgressTrigger();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Trigger();
    
};


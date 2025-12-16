#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnTriggeredSingatureDelegate.h"
#include "OTWDProgressTrigger.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDProgressTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriggeredSingature OnTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnPlayerEnter;
    
    AOTWDProgressTrigger(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Trigger();
    
};


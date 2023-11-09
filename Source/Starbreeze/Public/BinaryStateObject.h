#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnStateChangedDelegate.h"
#include "BinaryStateObject.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ABinaryStateObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    bool bState;
    
    ABinaryStateObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetState(bool bInState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetState() const;
    
};


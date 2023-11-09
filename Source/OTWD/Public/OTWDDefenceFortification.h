#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EOTWDFortificationState.h"
#include "OTWDDefenceFortification.generated.h"

class APawn;

UCLASS(Blueprintable)
class OTWD_API AOTWDDefenceFortification : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EOTWDFortificationState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallEventOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EOTWDFortificationState SaveState;
    
    AOTWDDefenceFortification();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EOTWDFortificationState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Place();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EOTWDFortificationState OldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckPlayerCanPlace(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ghost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Disable();
    
};


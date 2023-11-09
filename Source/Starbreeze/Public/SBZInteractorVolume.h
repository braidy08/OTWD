#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBZInteractorVolume.generated.h"

class ASBZPlayerCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZInteractorVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeactivatedOnSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZPlayerCharacter*> PlayersInVolume;
    
public:
    ASBZInteractorVolume();
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccess(USBZInteractableComponent* InInteractable, const TArray<USBZBaseInteractorComponent*>& InInteractors);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged(USBZInteractableComponent* Interactable, bool bIsEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateVolume();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateVolume();
    
};


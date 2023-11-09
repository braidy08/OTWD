#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZBreachTargetActivationType.h"
#include "SBZBreachTarget.generated.h"

class ASBZBreachTarget;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USBZTimerComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBreachTarget : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZTimerComponent* TimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZBreachTarget*> LinkedBreachTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBreachTargetActivationType LinkedActivationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivatesLinkedBreachTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInteractionWhenActivated;
    
public:
    ASBZBreachTarget();
    UFUNCTION(BlueprintCallable)
    void ShowLinkedTargets();
    
    UFUNCTION(BlueprintCallable)
    void Show(bool bInShowLinkedTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionEnabledForAllLinkedTargets(bool bInEnabled, bool bInIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetActivated(bool bInActivated);
    
    UFUNCTION(BlueprintCallable)
    void PauseAllLinkedTargets(bool bInIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HideLinkedTargets();
    
    UFUNCTION(BlueprintCallable)
    void Hide(bool bInHideLinkedTargets);
    
};


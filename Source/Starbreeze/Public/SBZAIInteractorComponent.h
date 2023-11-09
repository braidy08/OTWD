#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBaseInteractorComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZAIInteractorComponent.generated.h"

class ASBZAICharacter;
class ASBZCharacter;
class USBZAIInteractableComponent;
class USBZInteractableComponent;
class USBZMarkerWidget;
class USBZUIMarker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIInteractorComponent : public USBZBaseInteractorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMarkerWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteracting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIMarker* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIInteractableComponent* CurrentInteractable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOnScreenTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOffScreenTracking;
    
public:
    USBZAIInteractorComponent();
    UFUNCTION(BlueprintCallable)
    bool SetInteractable(USBZAIInteractableComponent* InCurrentInteractable);
    
    UFUNCTION(BlueprintCallable)
    bool SearchInteractable(const FName Type, float Distance);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerKilled(ASBZCharacter* KilledOwner);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValid();
    
    UFUNCTION(BlueprintCallable)
    bool InterruptAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractionProgressChanged(USBZInteractableComponent* Interactable, float InteractionProgressSeconds, float InteractionProgressScale);
    
};


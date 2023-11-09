#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZOnInteractionObjective.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZOnInteractionObjective : public USBZObjectiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractableComponent> InteractableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAllInteractables;
    
public:
    USBZOnInteractionObjective();
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAutoPickUpItemCount.h"
#include "SBZAutoPickUpItemContainer.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAutoPickUpItemContainer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAutoPickUpItemCount> PickUpItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPickUpDistributionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDestroyOnLooted;
    
public:
    ASBZAutoPickUpItemContainer();
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
};


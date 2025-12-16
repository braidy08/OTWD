#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZPickedUpState.h"
#include "SBZBagItem.h"
#include "SBZStaticBagItem.generated.h"

class USBZOutlineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStaticBagItem : public ASBZBagItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PickedUpMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
public:
    ASBZStaticBagItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Remove(bool bDestroyItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickedUpState(ESBZPickedUpState OldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DetachWorldHiddenMultiCast(const FTransform& DetachTransform);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachWorldHidden(const FTransform& DetachTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttachWorldHidden();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZAutoPickUpItemCount.h"
#include "SBZLootContainer.h"
#include "SBZVisualLootContainer.generated.h"

UCLASS(Blueprintable)
class ASBZVisualLootContainer : public ASBZLootContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyEmptyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedRootMeshToMatchItems;
    
    ASBZVisualLootContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLootChanged(const TArray<FSBZAutoPickUpItemCount>& CurrentLoot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnDisableLootContainer();
    
};


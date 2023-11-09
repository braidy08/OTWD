#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBZDifficulty.h"
#include "SBZLootRegionTagConfig.h"
#include "SBZLootRegion.generated.h"

class ASBZLootContainer;
class USBZLootTableSchematic;

UCLASS(Blueprintable)
class ASBZLootRegion : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor RegionColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTableSchematic* LootTables[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTableSchematic* RegionLootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, USBZLootTableSchematic*> RegionLootTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASBZLootContainer>> RequiredLootContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLootRegionTagConfig> TaggedContainerConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASBZLootContainer>> EncompassedLootContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLootRegionTagConfig> TaggedActorConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> EncompassedTaggedActors;
    
    ASBZLootRegion();
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    USBZLootTableSchematic* GetCurrentLootTable();
    
    UFUNCTION(BlueprintCallable)
    void AddNewVolume();
    
};


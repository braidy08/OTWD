#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "ESBZTimeOfDay.h"
#include "SBZBuildingPrefabAccessSettings.h"
#include "SBZWorldSpawningSettings.h"
#include "Templates/SubclassOf.h"
#include "SBZWorldSettings.generated.h"

class AActor;
class ASBZLootRegion;
class UAkAudioBank;
class UAkAudioEvent;
class UGameplayEffect;
class UMediaSoundComponent;
class USBZRuntimeVisibilityData;
class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWorldSpawningSettings SpawningSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASBZLootRegion>> LootRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideMissionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideMissionSeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> AudioBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTimeOfDay TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingPrefabAccessSettings> BuildingPrefabAccessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, UStaticMesh*> ActorReducedMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayEffect>, TSubclassOf<AActor>> MissionItemClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMusic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRuntimeVisibilityData* RuntimeVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MasterMediaSoundComponent;
    
public:
    ASBZWorldSettings(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZRuntimeVisibilityData* GetRuntimeVisibilityData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaSoundComponent* GetMasterMediaSoundComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugMissionSeedAsString();
    
};


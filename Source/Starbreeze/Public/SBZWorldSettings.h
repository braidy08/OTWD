#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "CombatVisibilityData.h"
#include "ESBZTimeOfDay.h"
#include "SBZBuildingPrefabAccessSettings.h"
#include "SBZPrecomputedCombatVisibilitySettings.h"
#include "SBZRealtimeVisibilitySettings.h"
#include "SBZWorldSpawningSettings.h"
#include "Templates/SubclassOf.h"
#include "SBZWorldSettings.generated.h"

class AActor;
class ASBZLootRegion;
class ISBZCameraLocationInterface;
class USBZCameraLocationInterface;
class UAkAudioBank;
class UAkAudioEvent;
class UGameplayEffect;
class UMediaSoundComponent;
class USBZActorContainer;
class USBZLootTableSchematic;
class USBZObjectContainer;
class USBZObjectContainerTickable;
class USBZObjectRingBuffer;
class USBZObservableActorContainer;
class USBZRuntimeVisibilityData;
class USBZSimpleTickableGameObject;
class UStaticMesh;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObservableActorContainer* AllPlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObservableActorContainer* AllAlivePlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllNPCPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllHumanAIPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllTrapActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectContainer* AllLootContainerInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllPlayBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZSimpleTickableGameObject* TickableUseCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISBZCameraLocationInterface>> HandleCameraLocationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectContainerTickable* PendingVisibilityDeleteActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectRingBuffer* RagdollActorsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectRingBuffer* DebrisActorsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWorldSpawningSettings SpawningSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLootTableSchematic* DefaultLootTable;
    
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
    FSBZRealtimeVisibilitySettings RealtimeVisibilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPrecomputedCombatVisibilitySettings PrecomputedCombatVisibilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatVisibilityData PrecomputedVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMusic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRuntimeVisibilityData* RuntimeVisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MasterMediaSoundComponent;
    
public:
    ASBZWorldSettings();
private:
    UFUNCTION(BlueprintCallable)
    void TickUseCameraTransform(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZRuntimeVisibilityData* GetRuntimeVisibilityData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaSoundComponent* GetMasterMediaSoundComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugMissionSeedAsString();
    
    UFUNCTION(BlueprintCallable)
    void ContainerDestroyWhenNotLocallyVisible(USBZObjectContainer* Container, float DeltaTime);
    
};


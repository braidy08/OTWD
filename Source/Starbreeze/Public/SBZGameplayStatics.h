#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "BPOnDialogEnded_DelegateDelegate.h"
#include "ESBZDifficulty.h"
#include "ESBZEndMissionState.h"
#include "ESBZPlatform.h"
#include "ESBZPlayDialogResult.h"
#include "ESBZVoiceComment.h"
#include "SBZDetailedCollisionHandle.h"
#include "SBZVisualPerceptionInfo.h"
#include "SBZWeaponConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayStatics.generated.h"

class AActor;
class AController;
class APawn;
class ASBZAutoPickUpItem;
class ASBZCheckpoint;
class ASBZPlayBubble;
class ASBZPlayerCharacter;
class ASBZTriggerPoint;
class ASBZWeapon;
class ASBZWorldSettings;
class AVolume;
class IInterface;
class UInterface;
class UActorComponent;
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UDataTable;
class ULevel;
class ULevelStreaming;
class UObject;
class UPrimitiveComponent;
class USBZActorContainer;
class USBZDamageType;
class USBZLevelSchematic;
class USBZObjectContainer;
class USBZOutlineComponent;
class USBZWaypointComponent;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static FText WarnUnusedFormattingArguments(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamLevelSync(ULevelStreaming* LevelStreamingObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartMissionSuccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartMissionNeutralCountdown(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZWeapon* SpawnWeaponFromConfiguration(const UObject* WorldContextObject, APawn* Owner, const FSBZWeaponConfiguration& Configuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZWeapon* SpawnWeaponFromClass(const UObject* WorldContextObject, APawn* Owner, const TSubclassOf<ASBZWeapon>& WeaponClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnPickupItems(const UObject* WorldContextObject, const TSubclassOf<ASBZAutoPickUpItem>& PickupItemClass, const FVector& Location, int32 Count, float DistributionRadius);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnManagedVolumeFromClass(UPARAM(Ref) AVolume*& ManagedVolume, TSubclassOf<AVolume> VolumeClass, USceneComponent* AttachComponent, FName AttachSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrimitiveComponentEnabled(UPrimitiveComponent* Component, const bool bShouldBeHidden, const TEnumAsByte<ECollisionEnabled::Type> DesiredCollision, const bool bShouldTick);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCheckpointsAndDisallowPlayBubbles(const UObject* WorldContextObject, const TArray<ASBZCheckpoint*>& Checkpoints, TArray<ASBZPlayBubble*> Bubbles, float Timer, bool bAddDefaultWarningTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCheckpoints(const UObject* WorldContextObject, const TArray<ASBZCheckpoint*>& Checkpoints);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorEnabled(AActor* Actor, const bool bShouldBeHidden, const bool bShouldHaveCollision, const bool bShouldTick);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaySystemCommentWithSuitablePlayer(UObject* WorldContextObject, ESBZVoiceComment VoiceComment, const FVector& Location, float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RequestDestroyAi(APawn* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintWarning(UObject* WorldContextObject, const FString& String, bool bPrintToScreen, bool bShowDialog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintError(UObject* WorldContextObject, const FString& String, bool bPrintToScreen, bool bShowDialog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlayDialogResult PlayDialogWithSuitablePlayers(UObject* WorldContextObject, FName DialogID, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void LoadStreamLevelSync(ULevelStreaming* LevelStreamingObject, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void LoadClassSynchronous(const TSoftClassPtr<UObject>& ClassPtr, UClass*& ReturnValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void LoadAssetSynchronous(const TSoftObjectPtr<UObject>& AssetPtr, UObject*& ReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTargetWithinVisualPerception(UObject* WorldContextObject, const FSBZVisualPerceptionInfo& VisualPerception, bool bDebugDraw, float Length, const FLinearColor& ColorSide, const FLinearColor& ColorTop, float DebugDrawDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsAllPlayersInsideBubblesAndTriggerPoints(const UObject* WorldContextObject, const TArray<ASBZPlayBubble*>& Bubbles, const TArray<ASBZTriggerPoint*> Triggers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool InterruptMissionSuccess(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool InterruptMissionNeutralCountdown(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* GetStreamingLevelForWorld(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>& WorldAssetReference);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZLevelSchematic* GetSelectedMissionSchematic(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZWorldSettings* GetSBZWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ESBZPlatform GetPlatform();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumAlivePlayers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetMissionID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZDifficulty GetDifficulty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULevel* GetCurrentActorLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetChunkInstallProgress(int32 ChunkId);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsWithInterfaceInLevel(const ULevel* Level, const TSubclassOf<UInterface> ActorInterface, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassInLevel(const ULevel* Level, const TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULevel* GetActorLevel(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateSpreadCluster(const FVector& InDirection, int32 SpreadCount, int32 InnerSpreadCount, float SpreadAngle, float VerticalSpreadMultiplier, float InnerSpreadMultiplier, float PieOcclusion, TArray<FVector>& OutDirections);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTextWithTextTable(const FText& Format, const UDataTable* TextTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTextWithArguments(const FText& Format, const TMap<FString, FString>& Arguments);
    
    UFUNCTION(BlueprintCallable)
    static void ForceDestroyActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerCharacter* FindSuitablePlayer(UObject* WorldContextObject, const FVector& Location, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USBZOutlineComponent*> FindNearbyOutlineComponentsFromInteractableContainer(USBZObjectContainer* Container, const FVector& Position, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USBZOutlineComponent*> FindNearbyOutlineComponentsFromActorContainer(USBZActorContainer* Container, const FVector& Position, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FindNearbyActorsFromContainer(USBZActorContainer* Container, const FVector& Position, float Distance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerCharacter* FindCharacterForPlayerId(const UObject* WorldContextObject, int32 PlayerId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FailedMission(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EndMission(const UObject* WorldContextObject, ESBZEndMissionState EndMissionState);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesWeaponMatchConfiguration(const ASBZWeapon* Weapon, const FSBZWeaponConfiguration& Configuration);
    
    UFUNCTION(BlueprintCallable)
    static void DisableSceneComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DisablePrimitiveComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DisableActorComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DisableActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentHierarchy(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllAiInVolume(const UObject* WorldContextObject, const AVolume* Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllAi(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivatePawnCollision(const FSBZDetailedCollisionHandle& Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CalculatePlayersInsideBubblesAndTriggerPoints(const UObject* WorldContextObject, const TArray<ASBZPlayBubble*>& Bubbles, const TArray<ASBZTriggerPoint*> Triggers, int32& OutNumPlayersInside, int32& OutNumCurrentPlayersAlive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<USBZDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> OverlapChannel, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<USBZDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> OverlapChannel, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZWaypointComponent* AddWaypointComponentToActor(UObject* WorldContextObject, AActor* TargetActor, TSubclassOf<USBZWaypointComponent> WaypointClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZDetailedCollisionHandle ActivatePawnCollisionInSphere(const UObject* WorldContextObject, const FVector& Origin, const float Radius, const FGenericTeamId& IgnoreFriendliesToTeamId, const AActor* IgnoreActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZDetailedCollisionHandle ActivatePawnCollisionInLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End, const FGenericTeamId& IgnoreFriendliesToTeamId, const AActor* IgnoreActor);
    
};


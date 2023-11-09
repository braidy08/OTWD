#include "SBZGameplayStatics.h"
#include "Templates/SubclassOf.h"

FText USBZGameplayStatics::WarnUnusedFormattingArguments(const FText& Text) {
    return FText::GetEmpty();
}

void USBZGameplayStatics::UnloadStreamLevelSync(ULevelStreaming* LevelStreamingObject) {
}

bool USBZGameplayStatics::StartMissionSuccess(const UObject* WorldContextObject) {
    return false;
}

bool USBZGameplayStatics::StartMissionNeutralCountdown(const UObject* WorldContextObject) {
    return false;
}

ASBZWeapon* USBZGameplayStatics::SpawnWeaponFromConfiguration(const UObject* WorldContextObject, APawn* Owner, const FSBZWeaponConfiguration& Configuration) {
    return NULL;
}

ASBZWeapon* USBZGameplayStatics::SpawnWeaponFromClass(const UObject* WorldContextObject, APawn* Owner, const TSubclassOf<ASBZWeapon>& WeaponClass) {
    return NULL;
}

void USBZGameplayStatics::SpawnPickupItems(const UObject* WorldContextObject, const TSubclassOf<ASBZAutoPickUpItem>& PickupItemClass, const FVector& Location, int32 Count, float DistributionRadius) {
}

void USBZGameplayStatics::SpawnManagedVolumeFromClass(AVolume*& ManagedVolume, TSubclassOf<AVolume> VolumeClass, USceneComponent* AttachComponent, FName AttachSocket) {
}

UAkComponent* USBZGameplayStatics::SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy) {
    return NULL;
}

void USBZGameplayStatics::SetPrimitiveComponentEnabled(UPrimitiveComponent* Component, const bool bShouldBeHidden, const TEnumAsByte<ECollisionEnabled::Type> DesiredCollision, const bool bShouldTick) {
}

void USBZGameplayStatics::SetCheckpointsAndDisallowPlayBubbles(const UObject* WorldContextObject, const TArray<ASBZCheckpoint*>& Checkpoints, TArray<ASBZPlayBubble*> Bubbles, float Timer, bool bAddDefaultWarningTime) {
}

void USBZGameplayStatics::SetCheckpoints(const UObject* WorldContextObject, const TArray<ASBZCheckpoint*>& Checkpoints) {
}

void USBZGameplayStatics::SetActorEnabled(AActor* Actor, const bool bShouldBeHidden, const bool bShouldHaveCollision, const bool bShouldTick) {
}

void USBZGameplayStatics::SaySystemCommentWithSuitablePlayer(UObject* WorldContextObject, ESBZVoiceComment VoiceComment, const FVector& Location, float Distance) {
}

void USBZGameplayStatics::RequestDestroyAi(APawn* Actor) {
}

void USBZGameplayStatics::PrintWarning(UObject* WorldContextObject, const FString& String, bool bPrintToScreen, bool bShowDialog, FLinearColor TextColor, float Duration) {
}

void USBZGameplayStatics::PrintError(UObject* WorldContextObject, const FString& String, bool bPrintToScreen, bool bShowDialog, FLinearColor TextColor, float Duration) {
}

ESBZPlayDialogResult USBZGameplayStatics::PlayDialogWithSuitablePlayers(UObject* WorldContextObject, FName DialogID, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator) {
    return ESBZPlayDialogResult::Successful;
}

void USBZGameplayStatics::LoadStreamLevelSync(ULevelStreaming* LevelStreamingObject, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad) {
}

void USBZGameplayStatics::LoadClassSynchronous(const TSoftClassPtr<UObject>& ClassPtr, UClass*& ReturnValue) {
}

void USBZGameplayStatics::LoadAssetSynchronous(const TSoftObjectPtr<UObject>& AssetPtr, UObject*& ReturnValue) {
}

bool USBZGameplayStatics::IsTargetWithinVisualPerception(UObject* WorldContextObject, const FSBZVisualPerceptionInfo& VisualPerception, bool bDebugDraw, float Length, const FLinearColor& ColorSide, const FLinearColor& ColorTop, float DebugDrawDuration) {
    return false;
}

bool USBZGameplayStatics::IsShippingBuild() {
    return false;
}

bool USBZGameplayStatics::IsAllPlayersInsideBubblesAndTriggerPoints(const UObject* WorldContextObject, const TArray<ASBZPlayBubble*>& Bubbles, const TArray<ASBZTriggerPoint*> Triggers) {
    return false;
}

bool USBZGameplayStatics::InterruptMissionSuccess(const UObject* WorldContextObject) {
    return false;
}

bool USBZGameplayStatics::InterruptMissionNeutralCountdown(const UObject* WorldContextObject) {
    return false;
}

ULevelStreaming* USBZGameplayStatics::GetStreamingLevelForWorld(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld>& WorldAssetReference) {
    return NULL;
}

USBZLevelSchematic* USBZGameplayStatics::GetSelectedMissionSchematic(const UObject* WorldContextObject) {
    return NULL;
}

ASBZWorldSettings* USBZGameplayStatics::GetSBZWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

ESBZPlatform USBZGameplayStatics::GetPlatform() {
    return ESBZPlatform::Unknown;
}

int32 USBZGameplayStatics::GetNumAlivePlayers(UObject* WorldContextObject) {
    return 0;
}

FString USBZGameplayStatics::GetMissionID(const UObject* WorldContextObject) {
    return TEXT("");
}

ESBZDifficulty USBZGameplayStatics::GetDifficulty(const UObject* WorldContextObject) {
    return ESBZDifficulty::Normal;
}

ULevel* USBZGameplayStatics::GetCurrentActorLevel(const UObject* WorldContextObject) {
    return NULL;
}

float USBZGameplayStatics::GetChunkInstallProgress(int32 ChunkId) {
    return 0.0f;
}

void USBZGameplayStatics::GetAllActorsWithInterfaceInLevel(const ULevel* Level, const TSubclassOf<UInterface> ActorInterface, TArray<AActor*>& OutActors) {
}

void USBZGameplayStatics::GetAllActorsOfClassInLevel(const ULevel* Level, const TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

ULevel* USBZGameplayStatics::GetActorLevel(const AActor* Actor) {
    return NULL;
}

void USBZGameplayStatics::GenerateSpreadCluster(const FVector& InDirection, int32 SpreadCount, int32 InnerSpreadCount, float SpreadAngle, float VerticalSpreadMultiplier, float InnerSpreadMultiplier, float PieOcclusion, TArray<FVector>& OutDirections) {
}

FText USBZGameplayStatics::FormatTextWithTextTable(const FText& Format, const UDataTable* TextTable) {
    return FText::GetEmpty();
}

FText USBZGameplayStatics::FormatTextWithArguments(const FText& Format, const TMap<FString, FString>& Arguments) {
    return FText::GetEmpty();
}

void USBZGameplayStatics::ForceDestroyActor(AActor* Actor) {
}

ASBZPlayerCharacter* USBZGameplayStatics::FindSuitablePlayer(UObject* WorldContextObject, const FVector& Location, float Distance) {
    return NULL;
}

TArray<USBZOutlineComponent*> USBZGameplayStatics::FindNearbyOutlineComponentsFromInteractableContainer(USBZObjectContainer* Container, const FVector& Position, float Distance) {
    return TArray<USBZOutlineComponent*>();
}

TArray<USBZOutlineComponent*> USBZGameplayStatics::FindNearbyOutlineComponentsFromActorContainer(USBZActorContainer* Container, const FVector& Position, float Distance) {
    return TArray<USBZOutlineComponent*>();
}

TArray<AActor*> USBZGameplayStatics::FindNearbyActorsFromContainer(USBZActorContainer* Container, const FVector& Position, float Distance) {
    return TArray<AActor*>();
}

ASBZPlayerCharacter* USBZGameplayStatics::FindCharacterForPlayerId(const UObject* WorldContextObject, int32 PlayerId) {
    return NULL;
}

bool USBZGameplayStatics::FailedMission(const UObject* WorldContextObject) {
    return false;
}

bool USBZGameplayStatics::EndMission(const UObject* WorldContextObject, ESBZEndMissionState EndMissionState) {
    return false;
}

bool USBZGameplayStatics::DoesWeaponMatchConfiguration(const ASBZWeapon* Weapon, const FSBZWeaponConfiguration& Configuration) {
    return false;
}

void USBZGameplayStatics::DisableSceneComponent(USceneComponent* Component) {
}

void USBZGameplayStatics::DisablePrimitiveComponent(UPrimitiveComponent* Component) {
}

void USBZGameplayStatics::DisableActorComponent(UActorComponent* Component) {
}

void USBZGameplayStatics::DisableActor(AActor* Actor) {
}

void USBZGameplayStatics::DestroyComponentHierarchy(USceneComponent* Component) {
}

void USBZGameplayStatics::DestroyAllAiInVolume(const UObject* WorldContextObject, const AVolume* Volume) {
}

void USBZGameplayStatics::DestroyAllAi(const UObject* WorldContextObject) {
}

void USBZGameplayStatics::DeactivatePawnCollision(const FSBZDetailedCollisionHandle& Handle) {
}

void USBZGameplayStatics::CalculatePlayersInsideBubblesAndTriggerPoints(const UObject* WorldContextObject, const TArray<ASBZPlayBubble*>& Bubbles, const TArray<ASBZTriggerPoint*> Triggers, int32& OutNumPlayersInside, int32& OutNumCurrentPlayersAlive) {
}

TArray<AActor*> USBZGameplayStatics::ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<USBZDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> OverlapChannel, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return TArray<AActor*>();
}

TArray<AActor*> USBZGameplayStatics::ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<USBZDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> OverlapChannel, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return TArray<AActor*>();
}

USBZWaypointComponent* USBZGameplayStatics::AddWaypointComponentToActor(UObject* WorldContextObject, AActor* TargetActor, TSubclassOf<USBZWaypointComponent> WaypointClass) {
    return NULL;
}

FSBZDetailedCollisionHandle USBZGameplayStatics::ActivatePawnCollisionInSphere(const UObject* WorldContextObject, const FVector& Origin, const float Radius, const FGenericTeamId& IgnoreFriendliesToTeamId, const AActor* IgnoreActor) {
    return FSBZDetailedCollisionHandle{};
}

FSBZDetailedCollisionHandle USBZGameplayStatics::ActivatePawnCollisionInLine(const UObject* WorldContextObject, const FVector& Start, const FVector& End, const FGenericTeamId& IgnoreFriendliesToTeamId, const AActor* IgnoreActor) {
    return FSBZDetailedCollisionHandle{};
}

USBZGameplayStatics::USBZGameplayStatics() {
}


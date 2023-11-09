#include "SBZUtility.h"

void USBZUtility::SortObjectArrayByName(TArray<UObject*>& Array, bool Reverse) {
}

FRotator USBZUtility::SmoothRotateTowards(const FRotator& Start, const FRotator& End, float InRotationSpeed, float DeltaTime) {
    return FRotator{};
}

bool USBZUtility::IsA(UObject* Object, TSoftClassPtr<UObject> Class) {
    return false;
}

void USBZUtility::GetViewportSize(UObject* WorldContextObject, int32& SizeX, int32& SizeY) {
}

bool USBZUtility::GetSocketTransformFromAnimation(UAnimSequenceBase* Anim, FName SocketName, float Time, FTransform& OutTransform) {
    return false;
}

ASBZPlayerController* USBZUtility::GetSBZControllerFromActor(AActor* Actor) {
    return NULL;
}

ASBZPlayerCameraManager* USBZUtility::GetPlayerCameraManagerFromController(const APlayerController* PlayerController) {
    return NULL;
}

APlayerState* USBZUtility::GetLocalPlayerState(UObject* WorldContextObject) {
    return NULL;
}

APawn* USBZUtility::GetLocalPlayerPawn(UObject* WorldContextObject) {
    return NULL;
}

APlayerController* USBZUtility::GetLocalPlayerController(UObject* WorldContextObject) {
    return NULL;
}

FName USBZUtility::GetFNamePrefix(const FName& InName) {
    return NAME_None;
}

UObject* USBZUtility::GetDefaultObject(UClass* Class) {
    return NULL;
}

ASBZCharacter* USBZUtility::GetCharacterFromInteractorComponent(const USBZBaseInteractorComponent* Interactor) {
    return NULL;
}

bool USBZUtility::GetBoneTransformFromAnimation(UAnimSequenceBase* Anim, FName BoneName, float Time, FTransform& OutTransform) {
    return false;
}

void USBZUtility::DisableCastShadowsForDirectionalLightsForOccludedComponentsInLightSpace(UObject* WorldContextObject, UDirectionalLightComponent* Light) {
}

void USBZUtility::AttachChildComponentsToSocketsByTagMappingShuffled(USceneComponent* ParentComponent, const TMap<FName, FName>& SocketMapping, const FRandomStream& RandomStream) {
}

void USBZUtility::AttachChildComponentsToSocketsByTagMapping(USceneComponent* ParentComponent, const TMap<FName, FName>& SocketMapping) {
}

void USBZUtility::AttachChildComponentsToSocketsByTag(USceneComponent* ParentComponent, const FName ChildTag, const FName SocketPrefix, const FRandomStream& RandomStream, const float WarningDisplayDuration) {
}

void USBZUtility::Array_ShuffleWithStream(const TArray<int32>& TargetArray, const FRandomStream& Stream) {
}

void USBZUtility::AddInstancesToSockets(USceneComponent* TargetComponent, UInstancedStaticMeshComponent* InstancedMeshComponent, const FName& SocketPrefix) {
}

USBZUtility::USBZUtility() {
}


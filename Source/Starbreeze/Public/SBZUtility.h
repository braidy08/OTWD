#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZUtility.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class ASBZCharacter;
class ASBZPlayerCameraManager;
class ASBZPlayerController;
class UAnimSequenceBase;
class UDirectionalLightComponent;
class UInstancedStaticMeshComponent;
class UObject;
class USBZBaseInteractorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZUtility();
    UFUNCTION(BlueprintCallable)
    static void SortObjectArrayByName(UPARAM(Ref) TArray<UObject*>& Array, bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SmoothRotateTowards(const FRotator& Start, const FRotator& End, float InRotationSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsA(UObject* Object, TSoftClassPtr<UObject> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetViewportSize(UObject* WorldContextObject, int32& SizeX, int32& SizeY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSocketTransformFromAnimation(UAnimSequenceBase* Anim, FName SocketName, float Time, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASBZPlayerController* GetSBZControllerFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASBZPlayerCameraManager* GetPlayerCameraManagerFromController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerState* GetLocalPlayerState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetLocalPlayerPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFNamePrefix(const FName& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASBZCharacter* GetCharacterFromInteractorComponent(const USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBoneTransformFromAnimation(UAnimSequenceBase* Anim, FName BoneName, float Time, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableCastShadowsForDirectionalLightsForOccludedComponentsInLightSpace(UObject* WorldContextObject, UDirectionalLightComponent* Light);
    
    UFUNCTION(BlueprintCallable)
    static void AttachChildComponentsToSocketsByTagMappingShuffled(USceneComponent* ParentComponent, const TMap<FName, FName>& SocketMapping, const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    static void AttachChildComponentsToSocketsByTagMapping(USceneComponent* ParentComponent, const TMap<FName, FName>& SocketMapping);
    
    UFUNCTION(BlueprintCallable)
    static void AttachChildComponentsToSocketsByTag(USceneComponent* ParentComponent, const FName ChildTag, const FName SocketPrefix, const FRandomStream& RandomStream, const float WarningDisplayDuration);
    
    UFUNCTION(BlueprintCallable)
    static void Array_ShuffleWithStream(const TArray<int32>& TargetArray, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable)
    static void AddInstancesToSockets(USceneComponent* TargetComponent, UInstancedStaticMeshComponent* InstancedMeshComponent, const FName& SocketPrefix);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LevelStreaming.h"
#include "Engine/LevelStreaming.h"
#include "Components/SceneComponent.h"
#include "SBZLODLevelReference.h"
#include "SBZStreamingLevelComponent.generated.h"

class ULevel;
class ULevelStreaming;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZStreamingLevelComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLODLevelReference> WorldAssetReferences;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBlockOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StreamingLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadedStatus OnLevelLoadedProxy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingLoadedStatus OnLevelUnloadedProxy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingVisibilityStatus OnLevelShownProxy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingVisibilityStatus OnLevelHiddenProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LevelBounds;
    
    USBZStreamingLevelComponent();
    UFUNCTION(BlueprintCallable)
    void SetWorldAssets(const TArray<FSBZLODLevelReference>& WorldAssets);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldAsset(const TSoftObjectPtr<UWorld>& WorldAsset);
    
    UFUNCTION(BlueprintCallable)
    bool SetStreamingLevelLOD(int32 NewLODIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloadedRelay();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShownRelay();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadedRelay();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHiddenRelay();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FSBZLODLevelReference> GetWorldAssetReferences();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelStreaming* GetStreamingLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevel* GetLoadedLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyStreamingLevel(bool bPerformUpdate);
    
    UFUNCTION(BlueprintCallable)
    bool CreateStreamingLevel(bool bForceRecreate, bool bPerformUpdate);
    
};


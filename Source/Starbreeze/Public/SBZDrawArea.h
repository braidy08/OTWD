#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "RenderWrapper.h"
#include "SBZDrawArea.generated.h"

class ASBZDrawAreaReplicationManager;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDrawArea : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BufferMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DisplayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawUpdateIntervall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawUpdateTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> EligibleDrawKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FOnPointerEvent OnMouseButtonDownEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FOnPointerEvent OnMouseButtonUpEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DrawingSlateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderWrapper UserRenderWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DisplayMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRenderWrapper> PlayerRenderWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ReplicationPenMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ReplicationBufferRenderMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZDrawAreaReplicationManager* ReplicationManager;
    
public:
    USBZDrawArea();
    UFUNCTION(BlueprintCallable)
    void ToggleDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetPenToWrite();
    
    UFUNCTION(BlueprintCallable)
    void SetPenToErase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawing();
    
    UFUNCTION(BlueprintCallable)
    void InitializeReplicationManager();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteDebug();
    
private:
    UFUNCTION(BlueprintCallable)
    void DrawTimerFunction();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearDrawing();
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor CalculateUserColor(int32 Seed);
    
};


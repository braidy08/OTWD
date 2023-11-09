#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EOTWDDefenceMode.h"
#include "Templates/SubclassOf.h"
#include "OTWDDefenceMeterWidget.generated.h"

class AOTWDDefenceGameState;
class UImage;
class UMaterialInstanceDynamic;
class UOTWDDefenceWaveIndicator;
class UPanelWidget;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDDefenceMeterWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOTWDDefenceWaveIndicator> WidgetWaveIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ContainerWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDDefenceGameState* GameState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MilitaryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MilitaryIconFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BanditIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BanditIconFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDDefenceWaveIndicator*> WaveIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StrikeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* FailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOTWDDefenceMode CurrentDefenceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Failed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ChunkOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ChunkTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ChunkThree;
    
public:
    UOTWDDefenceMeterWidget();
private:
    UFUNCTION(BlueprintCallable)
    void SetupWidgetHuman(UPanelWidget* WaveContainer, UMaterialInstanceDynamic* ProgressMaterial, UImage* ModeIcon, UImage* FailedIcon, UWidgetAnimation* FaildAnim, UWidgetAnimation* ChunkOneAnim, UWidgetAnimation* ChunkTwoAnim, UWidgetAnimation* ChunkThreeAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePhase();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStrikeUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndGame();
    
    UFUNCTION(BlueprintCallable)
    void InitDefenceMeter();
    
};


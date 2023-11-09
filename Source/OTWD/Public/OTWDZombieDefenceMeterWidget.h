#pragma once
#include "CoreMinimal.h"
#include "OTWDDefenceMeterWidget.h"
#include "OTWDGateIconUI.h"
#include "Templates/SubclassOf.h"
#include "OTWDZombieDefenceMeterWidget.generated.h"

class UOTWDDefenceGateWidget;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDZombieDefenceMeterWidget : public UOTWDDefenceMeterWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDGateIconUI> GateIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOTWDDefenceGateWidget> GateWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ContainerGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDDefenceGateWidget*> GatesWidgets;
    
public:
    UOTWDZombieDefenceMeterWidget();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateGatesState();
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgetZombie(UPanelWidget* WaveContainer, UPanelWidget* GateContainer, UTextBlock* TimeText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePhase();
    
    UFUNCTION(BlueprintCallable)
    void InitDefenceMeter();
    
};


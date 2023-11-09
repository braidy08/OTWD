#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZObjectiveEvent.h"
#include "SBZObjectiveDescriptionWidget.generated.h"

class UCanvasPanel;
class USBZObjectiveDescriptionBuffer;
class USBZObjectiveSchematic;
class USBZSubObjectiveDescriptionWidget;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZObjectiveDescriptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, USBZSubObjectiveDescriptionWidget*> SubObjectives;
    
public:
    USBZObjectiveDescriptionWidget();
    UFUNCTION(BlueprintCallable)
    USBZObjectiveSchematic* SetupObjectiveDescription(const FSBZObjectiveEvent& ObjectiveEvent, UTextBlock* DescriptionText);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UTextBlock* MillisecondsText, UTextBlock* SecondsText, UTextBlock* MinutesText, UTextBlock* CountCurrent, UTextBlock* CountTotalText, UCanvasPanel* SubObjectivesCanvasPanel);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStateChanged(const FSBZObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAdded(const FSBZObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowTotalCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIcon(UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnObjectiveAdded(const FSBZObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFailed(USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCompleted(USBZObjectiveSchematic* ObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideTotalCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideCount();
    
    UFUNCTION(BlueprintCallable)
    void AddSubObjective(USBZObjectiveDescriptionBuffer* Buffer, const FSBZObjectiveEvent& ObjectiveEvent);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZObjectiveEvent.h"
#include "SBZSubObjectiveDescriptionWidget.generated.h"

class USBZObjectiveSchematic;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSubObjectiveDescriptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZSubObjectiveDescriptionWidget();
    UFUNCTION(BlueprintCallable)
    USBZObjectiveSchematic* SetupSubObjectiveDescription(const FSBZObjectiveEvent& ObjectiveEvent, UTextBlock* DescriptionText);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAdded(const FSBZObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIcon(UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnObjectiveAdded(const FSBZObjectiveEvent& ObjectiveEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFailed(USBZObjectiveSchematic* InObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCompleted(USBZObjectiveSchematic* InObjectiveSchematic);
    
};


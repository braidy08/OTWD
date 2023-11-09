#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OTWDCampHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDCampHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOTWDCampHUDWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateWaves(int32 CurrentWave);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTimer(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDoor(int32 DoorNumber, int32 NumPlanks, bool bIsBroken, bool bHasHorde);
    
    UFUNCTION(BlueprintCallable)
    void ShowWarning(const FText& WarningText, const FName& GlobalColor, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateWaves(int32 CurrentWave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTimer(float NewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateDoor(int32 DoorNumber, int32 NumPlanks, bool bIsBroken, bool bHasHorde);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowWarning(const FText& WarningText, const FName& GlobalColor, float Duration);
    
};


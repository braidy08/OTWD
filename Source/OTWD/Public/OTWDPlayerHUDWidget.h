#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerHUDWidget.h"
#include "OTWDPlayerHUDWidget.generated.h"

class UOTWDAbilityCraftingWidget;
class UOTWDCampHUDWidget;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDPlayerHUDWidget : public USBZPlayerHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOTWDAbilityCraftingWidget* CraftingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOTWDCampHUDWidget* CampHUD;
    
public:
    UOTWDPlayerHUDWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UOTWDAbilityCraftingWidget* CraftingMenuWidget, UOTWDCampHUDWidget* CampHUDWidget);
    
    UFUNCTION(BlueprintCallable)
    UOTWDAbilityCraftingWidget* GetCraftingMenu();
    
    UFUNCTION(BlueprintCallable)
    UOTWDCampHUDWidget* GetCampHUD();
    
};


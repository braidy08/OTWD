#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "ISBZPlayerHUD.generated.h"

class USBZHUDWidget;
class UUserWidget;

UINTERFACE(Blueprintable)
class STARBREEZE_API UISBZPlayerHUD : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API IISBZPlayerHUD : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UUserWidget> GetHUDMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USBZHUDWidget* GetHUD() const;
    
};


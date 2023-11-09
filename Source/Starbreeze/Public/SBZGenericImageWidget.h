#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZGenericImageWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZGenericImageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZGenericImageWidget();
    UFUNCTION(BlueprintCallable)
    void SetImage(UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetImage(UTexture2D* Texture2D);
    
};


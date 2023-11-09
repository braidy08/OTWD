#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SBZUIFont.h"
#include "Templates/SubclassOf.h"
#include "SBZActionTextWidget.generated.h"

class UHorizontalBox;
class USBZActionImageWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZActionTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZActionImageWidget> ActionImageBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIFont DefaultFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CurrentText;
    
public:
    USBZActionTextWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UHorizontalBox* PanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupTextDefaults(FName GlobalFont, FName GlobalColor, bool bRequiresUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetTextString(const FText& NewText);
    
};


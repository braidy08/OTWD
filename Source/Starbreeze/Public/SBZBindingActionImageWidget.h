#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZBindingActionImageWidget.generated.h"

class USBZBaseActionWidget;
class USBZUIActionVisualSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBindingActionImageWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIActionVisualSchematic* ActionVisualSchematic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZBaseActionWidget> BindingKeyWidget;
    
public:
    USBZBindingActionImageWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAction(FName Action);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshAction();
    
};


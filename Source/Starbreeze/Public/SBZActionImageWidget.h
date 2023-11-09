#pragma once
#include "CoreMinimal.h"
#include "ESBZControllerUIType.h"
#include "SBZBaseLoadingSubWidget.h"
#include "SBZActionImageWidget.generated.h"

class USBZUIActionVisualSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZActionImageWidget : public USBZBaseLoadingSubWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIActionVisualSchematic* ActionVisualSchematic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZControllerUIType ControllerType;
    
public:
    USBZActionImageWidget();
    UFUNCTION(BlueprintCallable)
    void SetAction(FName Action);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnKeysRebound();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerTypeChanged(ESBZControllerUIType Type);
    
};


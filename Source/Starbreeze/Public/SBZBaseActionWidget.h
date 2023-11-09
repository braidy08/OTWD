#pragma once
#include "CoreMinimal.h"
#include "SBZBaseLoadingSubWidget.h"
#include "SBZBaseActionWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBaseActionWidget : public USBZBaseLoadingSubWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ActionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ActionTexture;
    
public:
    USBZBaseActionWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* ImageWidget);
    
};


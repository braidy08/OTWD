#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZPingWidget.generated.h"

class APlayerState;
class UMaterialInstanceDynamic;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class STARBREEZE_API USBZPingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingThreeBarMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingTwoBarMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PingOneBarMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* PingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* CurrentPlayerState;
    
public:
    USBZPingWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UMaterialInstanceDynamic* PingMaterialWidget, UTextBlock* PingTextWidget);
    
};


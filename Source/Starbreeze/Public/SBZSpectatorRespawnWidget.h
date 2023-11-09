#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZSpectatorRespawnWidget.generated.h"

class ASBZPlayerState;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSpectatorRespawnWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OwnerState;
    
public:
    USBZSpectatorRespawnWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTimerText(UTextBlock* TextWidget);
    
};


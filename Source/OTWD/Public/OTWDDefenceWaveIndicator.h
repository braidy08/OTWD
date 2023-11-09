#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OTWDDefenceWaveIndicator.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDDefenceWaveIndicator : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WaveAnim;
    
public:
    UOTWDDefenceWaveIndicator();
    UFUNCTION(BlueprintCallable)
    void SetupWidget(UWidgetAnimation* WaveAnimation);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZPassiveAbilityState.h"
#include "SBZPassiveAbilityWidget.generated.h"

class APawn;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPassiveAbilityWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PassiveImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ActiveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CooldownAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ReadyAnim;
    
public:
    USBZPassiveAbilityWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* PassiveImageWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* ActiveAnimation, UWidgetAnimation* CooldownAnimation, UWidgetAnimation* ReadyAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPassiveAbilityUpdated(APawn* Owner, ESBZPassiveAbilityState NewState);
    
};


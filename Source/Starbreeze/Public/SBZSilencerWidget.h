#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZRangedWeaponModuleResultType.h"
#include "ESBZRangedWeaponModuleType.h"
#include "SBZSilencerWidget.generated.h"

class ASBZPlayerCharacter;
class ASBZRangedWeapon;
class UProgressBar;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSilencerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* BlinkProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* MissingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DecreaseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EquippedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnequippedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BrokenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
public:
    USBZSilencerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UProgressBar* CurrentProgressWidget, UProgressBar* BlinkProgressWidget, UProgressBar* MissingProgressWidget, UWidgetAnimation* DecreasedAnimation, UWidgetAnimation* EquippedAnimation, UWidgetAnimation* UnequippedAnimation, UWidgetAnimation* BrokenAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponPartChanged(ESBZRangedWeaponModuleType ModType, bool bWantedToEnable, ESBZRangedWeaponModuleResultType Result);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged();
    
};


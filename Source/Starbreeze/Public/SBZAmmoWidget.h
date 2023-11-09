#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZWeaponFamily.h"
#include "ESBZWeaponSlotType.h"
#include "SBZAmmoWidget.generated.h"

class ASBZPlayerCharacter;
class ASBZRangedWeapon;
class UAkAudioEvent;
class UImage;
class UPanelWidget;
class USBZAttributeProgressWidget;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAmmoWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoWarningPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PrimaryAmmoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SecondaryAmmoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PrimarySoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SecondarySoundEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SpareAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* PickupAmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PickupImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* VisibilityPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAttributeProgressWidget* MeleeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PickupAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LowAmmoAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DefaultStateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PrevPlayedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DisappearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAmmoDecreasedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAmmoIncreasedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClipAmmoDecreasedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClipAmmoIncreasedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZWeaponFamily, UTexture2D*> WeaponFamilyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayAfter;
    
public:
    USBZAmmoWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* CurrentAmmoWidget, UTextBlock* SpareAmmoWidget, UTextBlock* PickupTextWidget, UImage* AmmoIconWidget, UPanelWidget* VisibilityPanelWidget, USBZAttributeProgressWidget* MeleeAmmoWidget, UWidgetAnimation* PickupAnimation, UWidgetAnimation* LowAmmoStateAnimation, UWidgetAnimation* DefaultStateAnimation, UWidgetAnimation* AppearAnimation, UWidgetAnimation* DisappearAnimation, UWidgetAnimation* CurrentAmmoDecreasedAnimation, UWidgetAnimation* CurrentAmmoIncreaseAnimation, UWidgetAnimation* ClipAmmoDecreasedAnimation, UWidgetAnimation* ClipAmmoIncreasedAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoPickup(ASBZPlayerCharacter* Character, ESBZWeaponFamily WeaponFamily, ESBZWeaponSlotType WeaponSlot, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void DisplayAmmoPickup();
    
};


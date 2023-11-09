#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPartyMemberHUDWidget.generated.h"

class AActor;
class ASBZPlayerCharacter;
class ASBZPlayerState;
class UImage;
class USBZAttributeProgressWidget;
class USBZDeathWidget;
class USBZDownedWidget;
class USBZKeyItemManagerWidget;
class USBZObservableActorContainer;
class USBZPartySpeakerWidget;
class USBZPlayerDefeatHandler;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPartyMemberHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ToolIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* DisplayedPlayerState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PlayerPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDownedWidget* DownedManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAttributeProgressWidget* HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZKeyItemManagerWidget* KeyItemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDeathWidget* DeathManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPartySpeakerWidget* SpeakingIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AliveDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DownedDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DeadDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* DisplayedPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatHandler* DefeatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZObservableActorContainer* PlayerContainer;
    
public:
    USBZPartyMemberHUDWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* ToolIconWidget, UImage* PlayerPortraitWidget, UTextBlock* NameTextWidget, USBZDownedWidget* DownedWidget, USBZAttributeProgressWidget* HealthBarWidget, USBZKeyItemManagerWidget* KeyItemManagerWidget, USBZDeathWidget* DeathWidget, USBZPartySpeakerWidget* SpeakingIconWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* FadeInAnimation, UWidgetAnimation* AliveDefaultAnimation, UWidgetAnimation* DownedDefaultAnimation, UWidgetAnimation* DeadDefaultAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnRefreshed();
    
    UFUNCTION(BlueprintCallable)
    void OnNameReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Owner);
    
};


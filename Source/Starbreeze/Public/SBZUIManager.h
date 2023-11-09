#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "ENotificationPriority.h"
#include "ESBZControllerUIType.h"
#include "ESBZPlatformType.h"
#include "OnControllerUITypeChangedDelegate.h"
#include "OnShowHUDBannerTextDelegate.h"
#include "OnShowPauseMenuDelegate.h"
#include "SBZAbilityUIData.h"
#include "SBZGameplayAttributeUIData.h"
#include "SBZGameplayEffectUIData.h"
#include "SBZGameplayTagUIData.h"
#include "SBZPlayerUIData.h"
#include "SBZUIFont.h"
#include "Templates/SubclassOf.h"
#include "SBZUIManager.generated.h"

class AActor;
class APawn;
class UAkAudioEvent;
class UGameplayAbility;
class UGameplayEffect;
class USBZHUDWidget;
class USBZLoadingScreenManager;
class USBZMarkerWidget;
class USBZNotificationWidget;
class USBZPopupWidget;
class USBZUIGlobalsSchematic;
class USBZUIManager;
class USBZUIMarker;
class USBZUISaveData;
class USceneComponent;
class UTexture2D;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerUITypeChanged OnControllerTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowHUDBannerText OnShowHUDBannerText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPauseMenu OnShowPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoadingScreenManager> LoadingManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZNotificationWidget> NotificationWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPopupWidget> PopupWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseOpenSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseClosedSoundEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* PauseMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZHUDWidget* HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZUIMarker*> MarkerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIGlobalsSchematic* UIGlobalsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* LastUser;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<APawn*, TWeakObjectPtr<USBZHUDWidget>> HUDWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZNotificationWidget* NotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPopupWidget* PopupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZControllerUIType CurrentControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZUISaveData* UISaveData;
    
public:
    USBZUIManager();
    UFUNCTION(BlueprintCallable)
    void ToggleNotification(bool bCanShow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZPopupWidget* ShowPopup(UObject* WorldContextObject, const FText& TitleText, UUserWidget* BodyWidget, const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowNotification(UObject* WorldContextObject, FText TitleText, FText BodyText, float Duration, ENotificationPriority Priority, bool bShowProgress, int32 CurrentProgress, int32 MaxProgress, UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowHUDBannerText(UObject* WorldContextObject, FText LocalisedText, float Duration, bool bShowImmediate, UAkAudioEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    bool ShowHUD();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowAllMarkers(UObject* WorldContextObject, float Delay, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPopupOpen(bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToUI();
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToGameAndUI();
    
    UFUNCTION(BlueprintCallable)
    void SetInputModeToGame();
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowPauseScreen(bool CanShow);
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowHUD(bool CanShow);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMap(UWorld* World);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVirtualCursorClicked(bool bIsGamepad);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPopupVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingScreenActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideHUD();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideAllMarkers(UObject* WorldContextObject, float Delay, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool HasTutorialTag(const FName& InTutorialTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZUIManager* GetUIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipIntroMovies();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZPlayerUIData GetPlayerUIData(UObject* WorldContextObject, const TSubclassOf<APawn> InPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESBZPlatformType GetPlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZUIFont GetGlobalFont(UObject* WorldContextObject, FName FontName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetGlobalColor(UObject* WorldContextObject, FName ColorName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZGameplayTagUIData GetGameplayTagUIData(UObject* WorldContextObject, const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZGameplayEffectUIData GetGameplayEffectUIData(UObject* WorldContextObject, const UGameplayEffect* InEffect);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZGameplayAttributeUIData GetGameplayAttributeUIData(UObject* WorldContextObject, const FGameplayAttribute& InAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZControllerUIType GetCurrentControllerType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZAbilityUIData GetAbilityUIData(UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> InAbility);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DeleteMarker(UObject* WorldContextObject, USBZUIMarker* Marker);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZUIMarker* CreateWorldPosMarker(UObject* WorldContextObject, const FVector& TargetPos, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZUIMarker* CreateSceneComponentMarker(UObject* WorldContextObject, USceneComponent* TargetSceneComponent, const FVector& PosOffset, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZUIMarker* CreateActorMarker(UObject* WorldContextObject, AActor* TargetActor, const FVector& PosOffset, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha);
    
    UFUNCTION(BlueprintCallable)
    void AddTutorialTag(const FName& InTutorialTag);
    
};


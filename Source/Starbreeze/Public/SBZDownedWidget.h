#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZPlayerDefeatState.h"
#include "Templates/SubclassOf.h"
#include "SBZDownedWidget.generated.h"

class AActor;
class ASBZMissionState;
class ASBZPlayerCharacter;
class UMaterialInstanceDynamic;
class UPanelWidget;
class USBZLifeStatusWidget;
class USBZPlayerDefeatHandler;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDownedWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLifeStatusWidget> LifeStatusBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatHandler* DefeatHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* MinText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SecsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* LivesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowReviveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideReviveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDowned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReviving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrevTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZMissionState* MissionState;
    
public:
    USBZDownedWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* MinTextWidget, UTextBlock* SecsTextWidget, UMaterialInstanceDynamic* ProgressMaterialWidget, UPanelWidget* LivesPanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimation(UWidgetAnimation* ShowReviveAnimation, UWidgetAnimation* HideReviveAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(ASBZPlayerCharacter* Owner);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
};


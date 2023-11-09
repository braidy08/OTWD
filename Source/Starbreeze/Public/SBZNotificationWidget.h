#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZNotificationData.h"
#include "SBZNotificationWidget.generated.h"

class UCanvasPanel;
class UImage;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ProgressContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* CurrentProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZNotificationData> NotificationBacklog;
    
public:
    USBZNotificationWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* TitleTextWidget, UTextBlock* BodyTextWidget, UCanvasPanel* ProgressContainerWidget, UTextBlock* ProgressTextWidget, UProgressBar* CurrentProgressBarWidget, UImage* IconImageWidget);
    
};


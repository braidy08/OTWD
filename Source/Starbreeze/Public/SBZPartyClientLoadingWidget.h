#pragma once
#include "CoreMinimal.h"
#include "SBZBaseLoadingSubWidget.h"
#include "SBZPartyClientLoadingWidget.generated.h"

class ASBZPlayerState;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPartyClientLoadingWidget : public USBZBaseLoadingSubWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PlayerPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CinematicWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* CharacterNameTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressTextWidget;
    
public:
    USBZPartyClientLoadingWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* InPlayerPortrait, UImage* InCinematicWidget, UTextBlock* InCharacterNameTextWidget, UTextBlock* InProgressTextWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadProgressUpdated(float InProgress);
    
};


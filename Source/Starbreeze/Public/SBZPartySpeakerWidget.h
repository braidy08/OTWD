#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Blueprint/UserWidget.h"
#include "SBZPartySpeakerWidget.generated.h"

class ASBZPlayerState;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPartySpeakerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibileTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* CurrentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* SpeakIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* MuteIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* TextMuteIcon;
    
public:
    USBZPartySpeakerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidget(UImage* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetupMuted();
    
    UFUNCTION(BlueprintCallable)
    void SetUniuqeID(FUniqueNetIdRepl PlayerUniqueId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTalking(FUniqueNetIdRepl PlayerId, bool IsTalking);
    
};


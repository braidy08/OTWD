#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZHUDWidget.h"
#include "SBZPlayerHUDWidget.generated.h"

class AActor;
class USBZUIManager;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPlayerHUDWidget : public USBZHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerFadeInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerFadeOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerFadeOutDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIManager* UIManager;
    
public:
    USBZPlayerHUDWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupComplete(ESBZPlayerDefeatState InitState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateChanged(ESBZPlayerDefeatState NewState);
    
};


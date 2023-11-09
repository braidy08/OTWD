#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZVignetteManagerWidget.generated.h"

class AActor;
class UAbilitySystemComponent;
class USBZAnimatedVignetteWidget;
class USBZHealthVignetteWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZVignetteManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZHealthVignetteWidget* HealthVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedVignetteWidget* DownedVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedVignetteWidget* BleedOutVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedVignetteWidget* DeathVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedVignetteWidget* ReviveVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedVignetteWidget* LowStaminaVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
public:
    USBZVignetteManagerWidget();
    UFUNCTION(BlueprintCallable)
    void SetReviveVignette(USBZAnimatedVignetteWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetLowStaminaVignette(USBZAnimatedVignetteWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthVignette(USBZHealthVignetteWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetDownedVignette(USBZAnimatedVignetteWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathVignette(USBZAnimatedVignetteWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetBleedOutVignette(USBZAnimatedVignetteWidget* Widget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
};


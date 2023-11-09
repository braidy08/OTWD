#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZLifeStatusWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZLifeStatusWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AliveStateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DeadStateAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DeadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitiallyAlive;
    
public:
    USBZLifeStatusWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UWidgetAnimation* AliveStateAnimWidget, UWidgetAnimation* DeadStateAnimWidget, UWidgetAnimation* DeadAnimWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupData(bool bIsAliveInitial);
    
};


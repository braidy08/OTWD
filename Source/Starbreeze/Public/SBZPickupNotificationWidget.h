#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "SBZChangeData.h"
#include "SBZGameplayAttributeUIData.h"
#include "SBZPickupNotificationWidget.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USBZPickupNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> GameplayAttributes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* AttName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* AttNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* AttImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NotifAnima;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayAttributeUIData> ResourceUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZChangeData> ChangedAttributs;
    
public:
    USBZPickupNotificationWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidget(UTextBlock* ResourceName, UTextBlock* ResourceNumber, UImage* ResourceImage, UWidgetAnimation* NotifAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void DisplayAttribute();
    
};


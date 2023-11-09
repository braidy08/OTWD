#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "SBZAbilityCraftingResourceWidget.generated.h"

class UImage;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAbilityCraftingResourceWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ResourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ResourceCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ResourceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPrevInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceAvailableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceAvailableDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceEmptyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceEmptyDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceAvailableToActivatedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceActivatedToAvailableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceActivatedToEmptyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceChangedAnim;
    
public:
    USBZAbilityCraftingResourceWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* ResourceIconWidget, UTextBlock* ResourceCountTextWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupData(const FGameplayAttribute& InResourceAttribute);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* ResourceAvailableAnimation, UWidgetAnimation* ResourceAvailableDefaultAnimation, UWidgetAnimation* ResourceEmptyAnimation, UWidgetAnimation* ResourceEmptyDefaultAnimation, UWidgetAnimation* ResourceAvailableToActivatedAnimation, UWidgetAnimation* ResourceActivatedToAvailableAnimation, UWidgetAnimation* ResourceActivatedToEmptyAnimation, UWidgetAnimation* ResourceChangedAnimation);
    
};


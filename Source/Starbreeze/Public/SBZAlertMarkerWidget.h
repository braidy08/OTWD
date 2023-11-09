#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerSingleWidget.h"
#include "SBZAlertMarkerWidget.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAlertMarkerWidget : public USBZMarkerSingleWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SuspiciousDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SuspiciousAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InvestigatingDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InvestigatingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CombatAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NewTargetAnim;
    
public:
    USBZAlertMarkerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UMaterialInstanceDynamic* ProgressMaterialWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* SuspiciousDefaultAnimation, UWidgetAnimation* SuspiciousAnimation, UWidgetAnimation* InvestigatingDefaultAnimation, UWidgetAnimation* InvestigatingAnimation, UWidgetAnimation* CombatAnimation, UWidgetAnimation* NewTargetAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuspicousFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnInvestigatingFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatAnimationFinished();
    
};


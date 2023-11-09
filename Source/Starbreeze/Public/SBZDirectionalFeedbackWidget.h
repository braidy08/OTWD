#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ESBZPlayerDefeatState.h"
#include "Templates/SubclassOf.h"
#include "SBZDirectionalFeedbackWidget.generated.h"

class AActor;
class AController;
class UCanvasPanel;
class UDamageType;
class USBZDirectionalIndicatorWidget;
class USBZHitIndicatorWidget;
class USBZPlayerDirectionalFeedbackComponent;
class USBZPlayerStealthMeterComponent;
class USBZStealthIndicatorWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDirectionalFeedbackWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HealthColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ArmourColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HumanColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ZombieColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZHitIndicatorWidget> HitIndicatorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZStealthIndicatorWidget> StealthIndicatorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDirectionalIndicatorWidget> GrenadeIndicatorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGrenadeIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZHitIndicatorWidget*> HitArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZStealthIndicatorWidget*> StealthArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZDirectionalIndicatorWidget*> DirectionalArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerStealthMeterComponent* StealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDirectionalFeedbackComponent* DirectionalComponent;
    
public:
    USBZDirectionalFeedbackWidget();
    UFUNCTION(BlueprintCallable)
    void SetFeedbackPanel(UCanvasPanel* Panel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChangedEventHandler(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};


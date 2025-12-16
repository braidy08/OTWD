#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZDirectionalFeedbackWidget -FallbackName=SBZDirectionalFeedbackWidget
#include "Templates/SubclassOf.h"
#include "OTWDDirectionalFeedbackWidget.generated.h"

class UOTWDPlayerStealthMeterComponent;
class UOTWDZombieIndicatorWidget;
class USBZDirectionalIndicatorWidget;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDDirectionalFeedbackWidget : public USBZDirectionalFeedbackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOTWDZombieIndicatorWidget> ZombieIndicatorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDirectionalIndicatorWidget> SniperIndicatorBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UOTWDZombieIndicatorWidget*> ZombieArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZDirectionalIndicatorWidget*> SniperArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOTWDPlayerStealthMeterComponent* OTWDStealthComponent;
    
public:
    UOTWDDirectionalFeedbackWidget();

};


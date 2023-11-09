#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZBTDecorator_PointOfInterest.generated.h"

class USBZAlertnessComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_PointOfInterest : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PointOfInterestKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector HaveAbortedKey;
    
public:
    USBZBTDecorator_PointOfInterest();
    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel);
    
};


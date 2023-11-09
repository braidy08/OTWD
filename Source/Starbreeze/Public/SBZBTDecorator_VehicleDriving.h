#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_VehicleDriving.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_VehicleDriving : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CharacterObjectKey;
    
public:
    USBZBTDecorator_VehicleDriving();
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_CombatRoleChanged.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CombatRoleChanged : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CombatRoleKey;
    
    USBZBTDecorator_CombatRoleChanged();
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SBZBTDecorator_FiringPermissionHasToken.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_FiringPermissionHasToken : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAnyToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EnemyKey;
    
public:
    USBZBTDecorator_FiringPermissionHasToken();
};


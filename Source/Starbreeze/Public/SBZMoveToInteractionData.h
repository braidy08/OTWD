#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZMoveToInteractionData.generated.h"

class UActorComponent;
class UBehaviorTree;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMoveToInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ActorComponentClass;
    
    FSBZMoveToInteractionData();
};


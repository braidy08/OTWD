#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SBZMoveToInteraction.generated.h"

class UActorComponent;
class UBehaviorTree;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMoveToInteraction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ActorComponentClass;
    
    USBZMoveToInteraction();
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h"
#include "SBZBTDecorator_CheckGameplayTagsOnActor.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator_CheckGameplayTagsOnActor {
    GENERATED_BODY()
public:
    USBZBTDecorator_CheckGameplayTagsOnActor();

};


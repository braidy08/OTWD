#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAIPerceptionMemoryComponent.generated.h"

class ASBZAIController;
class USBZAIAggroSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIPerceptionMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAggroSystemComponent* AggroSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* OwnerController;
    
public:
    USBZAIPerceptionMemoryComponent();
};


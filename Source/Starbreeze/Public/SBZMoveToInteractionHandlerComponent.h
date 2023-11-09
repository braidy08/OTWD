#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZMoveToInteractionHandlerComponent.generated.h"

class ASBZAICharacter;
class USBZMoveToInteraction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZMoveToInteractionHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMoveToInteraction*> MoveToInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMoveToInteraction* CurrentMoveToInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* OwningCharacter;
    
public:
    USBZMoveToInteractionHandlerComponent();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZCharacterMovementComponent -FallbackName=SBZCharacterMovementComponent
#include "OTWDHumanAIMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDHumanAIMovementComponent : public USBZCharacterMovementComponent {
    GENERATED_BODY()
public:
    UOTWDHumanAIMovementComponent(const FObjectInitializer& ObjectInitializer);

};


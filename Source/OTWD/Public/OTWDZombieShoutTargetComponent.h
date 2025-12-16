#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZShoutTargetComponent -FallbackName=SBZShoutTargetComponent
#include "OTWDZombieShoutTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDZombieShoutTargetComponent : public USBZShoutTargetComponent {
    GENERATED_BODY()
public:
    UOTWDZombieShoutTargetComponent(const FObjectInitializer& ObjectInitializer);

};


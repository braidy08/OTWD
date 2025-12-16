#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZShoutTargetComponent -FallbackName=SBZShoutTargetComponent
#include "OTWDReviveShoutTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDReviveShoutTargetComponent : public USBZShoutTargetComponent {
    GENERATED_BODY()
public:
    UOTWDReviveShoutTargetComponent(const FObjectInitializer& ObjectInitializer);

};


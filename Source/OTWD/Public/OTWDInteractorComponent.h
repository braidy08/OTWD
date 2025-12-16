#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZPlayerInteractorComponent -FallbackName=SBZPlayerInteractorComponent
#include "OTWDInteractorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDInteractorComponent : public USBZPlayerInteractorComponent {
    GENERATED_BODY()
public:
    UOTWDInteractorComponent(const FObjectInitializer& ObjectInitializer);

};


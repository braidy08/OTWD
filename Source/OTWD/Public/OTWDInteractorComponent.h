#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZPlayerInteractorComponent.h"
#include "OTWDInteractorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDInteractorComponent : public USBZPlayerInteractorComponent {
    GENERATED_BODY()
public:
    UOTWDInteractorComponent(const FObjectInitializer& ObjectInitializer);

};


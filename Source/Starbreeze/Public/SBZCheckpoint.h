#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "SBZCheckpoint.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCheckpoint : public APlayerStart {
    GENERATED_BODY()
public:
    ASBZCheckpoint(const FObjectInitializer& ObjectInitializer);

};


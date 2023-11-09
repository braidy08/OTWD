#pragma once
#include "CoreMinimal.h"
#include "SBZBlockingVolume.h"
#include "SBZPlayerBlockingVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerBlockingVolume : public ASBZBlockingVolume {
    GENERATED_BODY()
public:
    ASBZPlayerBlockingVolume();
};


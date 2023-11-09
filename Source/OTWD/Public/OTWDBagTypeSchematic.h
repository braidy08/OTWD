#pragma once
#include "CoreMinimal.h"
#include "SBZBagTypeSchematic.h"
#include "OTWDBagTypeSchematic.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBagTypeSchematic : public USBZBagTypeSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetaResources;
    
    UOTWDBagTypeSchematic();
};


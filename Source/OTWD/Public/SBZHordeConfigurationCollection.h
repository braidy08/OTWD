#pragma once
#include "CoreMinimal.h"
#include "SBZHordeConfigurationCollection.generated.h"

class UOTWDHordeSchematic;

USTRUCT(BlueprintType)
struct FSBZHordeConfigurationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDHordeSchematic* Configurations[4];
    
    OTWD_API FSBZHordeConfigurationCollection();
};


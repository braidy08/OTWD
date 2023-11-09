#pragma once
#include "CoreMinimal.h"
#include "SBZCaliberImpactData.h"
#include "SBZImpactSchematic.h"
#include "SBZProjectileImpactSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZProjectileImpactSchematic : public USBZImpactSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCaliberImpactData> Calibers;
    
    USBZProjectileImpactSchematic();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZStandardImpactData.h"
#include "SBZImpactSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZImpactSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStandardImpactData Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTranslucentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucentSortPriority;
    
    USBZImpactSchematic();
};


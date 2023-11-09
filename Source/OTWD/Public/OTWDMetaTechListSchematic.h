#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "OTWDMetaTechListSchematic.generated.h"

class UOTWDMetaTechSchematic;

UCLASS(Blueprintable)
class UOTWDMetaTechListSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetaTechSchematic*> Techs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetaTechSchematic*> PrePurchasedTechs;
    
    UOTWDMetaTechListSchematic();
};


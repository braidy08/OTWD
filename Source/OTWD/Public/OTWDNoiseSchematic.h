#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZNoiseSchematic.h"
#include "OTWDNoiseSchematic.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDNoiseSchematic : public USBZNoiseSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowBuildHorde;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildHordeAmountDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> BuildHordeAmount;
    
    UOTWDNoiseSchematic();
};


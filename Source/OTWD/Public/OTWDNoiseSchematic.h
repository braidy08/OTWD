#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZNoiseSchematic -FallbackName=SBZNoiseSchematic
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


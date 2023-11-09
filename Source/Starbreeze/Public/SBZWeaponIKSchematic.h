#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponIKPlayerSchematic.h"
#include "SBZWeaponIKSchematic.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponIKSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponIKPlayerSchematic Player1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponIKPlayerSchematic Player3P;
    
    FSBZWeaponIKSchematic();
};


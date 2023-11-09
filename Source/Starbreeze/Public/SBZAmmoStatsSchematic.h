#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartStatsSchematic.h"
#include "SBZAmmoStatsSchematic.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAmmoStatsSchematic : public USBZWeaponPartStatsSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> EmptyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmptyAlwaysVisible;
    
    USBZAmmoStatsSchematic();
};


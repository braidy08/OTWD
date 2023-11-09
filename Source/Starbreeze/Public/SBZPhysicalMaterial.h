#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SBZPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectilePenetrationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectilePenetrationTravelDistanceReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectilePenetrationMaxTravelDistanceInsideMaterial;
    
    USBZPhysicalMaterial();
};


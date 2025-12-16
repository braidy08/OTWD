#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
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


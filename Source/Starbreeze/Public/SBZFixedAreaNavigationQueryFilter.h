#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "SBZFixedAreaNavigationQueryFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZFixedAreaNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AreaFixedSizeMinAdditionnalLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AreaFixedSizeMaxAdditionnalLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AreaFixedSizeMinAdditionnalWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AreaFixedSizeMaxAdditionnalWidth;
    
public:
    USBZFixedAreaNavigationQueryFilter();

};


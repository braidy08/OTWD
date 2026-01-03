#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavFilters/NavigationQueryFilter.h"
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


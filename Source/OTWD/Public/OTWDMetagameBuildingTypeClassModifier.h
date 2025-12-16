#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBuildingType.h"
#include "ESurvivorClassType.h"
#include "OTWDMetagameBuildingTypeClassModifier.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameBuildingTypeClassModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivorClassType SurvivorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    OTWD_API FOTWDMetagameBuildingTypeClassModifier();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccessPointData.generated.h"

class APathNode;
class UAccessPointType;

USTRUCT(BlueprintType)
struct STARBREEZE_API FAccessPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAccessPointType* AccessPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DesiredUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* ClosestNode;
    
    FAccessPointData();
};


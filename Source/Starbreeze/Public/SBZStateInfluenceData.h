#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZStateInfluenceData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZStateInfluenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InfluenceData;
    
    FSBZStateInfluenceData();
};


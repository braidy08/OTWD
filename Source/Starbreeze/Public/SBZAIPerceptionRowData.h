#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZAIPerceptionData.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAIPerceptionRowData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIPerceptionRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertnessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIPerceptionData PerceptionData;
    
    STARBREEZE_API FSBZAIPerceptionRowData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZAlertnessInfluenceIdHelper.h"
#include "SBZAlertnessStateEscalation.h"
#include "SBZAIInfluenceRowData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIInfluenceRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessInfluenceIdHelper Influence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessStateEscalation InfluenceData;
    
    STARBREEZE_API FSBZAIInfluenceRowData();
};


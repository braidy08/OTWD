#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZAIStanceData.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZAIStanceRowData.generated.h"

USTRUCT(BlueprintType)
struct FSBZAIStanceRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceData StanceData;
    
    STARBREEZE_API FSBZAIStanceRowData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameSurviorXpPerLevelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameSurviorXpPerLevelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    OTWD_API FOTWDMetagameSurviorXpPerLevelTableRow();
};


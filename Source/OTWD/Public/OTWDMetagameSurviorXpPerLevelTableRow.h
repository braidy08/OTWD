#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "OTWDMetagameSurviorXpPerLevelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameSurviorXpPerLevelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    OTWD_API FOTWDMetagameSurviorXpPerLevelTableRow();
};


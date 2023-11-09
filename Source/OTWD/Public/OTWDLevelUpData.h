#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDLevelUpData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDLevelUpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceGainPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Skillpoints;
    
    FOTWDLevelUpData();
};


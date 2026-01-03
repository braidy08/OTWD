#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameBuildingSurvivorLevelModifier.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameBuildingSurvivorLevelModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurvivorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    OTWD_API FOTWDMetagameBuildingSurvivorLevelModifier();
};


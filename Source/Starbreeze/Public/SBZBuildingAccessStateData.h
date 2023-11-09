#pragma once
#include "CoreMinimal.h"
#include "ESBZBuildingAccessState.h"
#include "SBZBuildingAccessStateData.generated.h"

USTRUCT(BlueprintType)
struct FSBZBuildingAccessStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBuildingAccessState State;
    
    STARBREEZE_API FSBZBuildingAccessStateData();
};


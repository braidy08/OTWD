#pragma once
#include "CoreMinimal.h"
#include "SBZBuildingAccessDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSBZBuildingAccessDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    STARBREEZE_API FSBZBuildingAccessDefinition();
};


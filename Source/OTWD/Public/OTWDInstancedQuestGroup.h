#pragma once
#include "CoreMinimal.h"
#include "OTWDInstancedQuestGroup.generated.h"

class UOTWDInstancedQuestDataAsset;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDInstancedQuestGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDInstancedQuestDataAsset*> InstancedQuestList;
    
    FOTWDInstancedQuestGroup();
};


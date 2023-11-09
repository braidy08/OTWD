#pragma once
#include "CoreMinimal.h"
#include "EOTWDInstancedQuestType.h"
#include "OTWDQuestDataAsset.h"
#include "OTWDInstancedQuestDataAsset.generated.h"

UCLASS(Blueprintable)
class UOTWDInstancedQuestDataAsset : public UOTWDQuestDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDInstancedQuestType InstancedQuestType;
    
    UOTWDInstancedQuestDataAsset();
};


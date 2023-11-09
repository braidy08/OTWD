#pragma once
#include "CoreMinimal.h"
#include "OTWDQuestObjectiveBaseDataAsset.h"
#include "OTWDQuestObjectiveIngameDataAsset.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class UOTWDQuestObjectiveIngameDataAsset : public UOTWDQuestObjectiveBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<ASBZCharacter>> RequiredPlayerPawn;
    
    UOTWDQuestObjectiveIngameDataAsset();
};


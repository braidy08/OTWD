#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameSummaryBase.h"
#include "OTWDNewSurvivorsSummary.generated.h"

class UOTWDMetagameSurvivor;
class UOTWDQuestDataAsset;

USTRUCT(BlueprintType)
struct FOTWDNewSurvivorsSummary : public FOTWDMetagameSummaryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivor*> NewSurvivors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestDataAsset*> NewMissions;
    
    OTWD_API FOTWDNewSurvivorsSummary();
};


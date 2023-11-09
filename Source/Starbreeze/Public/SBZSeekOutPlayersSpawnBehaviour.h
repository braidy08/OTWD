#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZBaseSpawnBehaviour.h"
#include "SBZSeekOutPlayersSpawnBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSeekOutPlayersSpawnBehaviour : public USBZBaseSpawnBehaviour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardInfluenceTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardInfluenceLocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertLevelToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alertness;
    
    USBZSeekOutPlayersSpawnBehaviour();
};


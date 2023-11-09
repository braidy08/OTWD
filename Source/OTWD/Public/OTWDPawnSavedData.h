#pragma once
#include "CoreMinimal.h"
#include "SBZPawnSavedData.h"
#include "OTWDPawnSavedData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDPawnSavedData : public FSBZPawnSavedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Skillpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperiencePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimePlayed;
    
    FOTWDPawnSavedData();
};


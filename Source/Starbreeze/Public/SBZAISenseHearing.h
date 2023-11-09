#pragma once
#include "CoreMinimal.h"
#include "SBZAISenseHearing_Requirement.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAISenseHearing.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAISenseHearing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper LevelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAISenseHearing_Requirement> Requirement;
    
    FSBZAISenseHearing();
};


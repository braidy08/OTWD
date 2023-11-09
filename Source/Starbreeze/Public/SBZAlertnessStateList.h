#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessState.h"
#include "SBZAlertnessStateList.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessStateList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlertnessState> Elements;
    
    FSBZAlertnessStateList();
};


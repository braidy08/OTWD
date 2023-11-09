#pragma once
#include "CoreMinimal.h"
#include "SBZRandomDefaultSwitchStates.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRandomDefaultSwitchStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> States;
    
    FSBZRandomDefaultSwitchStates();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevel.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackUnseenTargetLocation;
    
    FSBZAlertnessLevel();
};


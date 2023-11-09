#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleStruggleSettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleStruggleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformStruggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float NpcStruggleDurationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float NpcStruggleDurationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<float> SurvivalChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 AttackerCountLoseImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bCountOtherAttackers;
    
    FSBZGrappleStruggleSettings();
};


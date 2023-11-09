#pragma once
#include "CoreMinimal.h"
#include "SBZTargetCandidate.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct FSBZTargetCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SqDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SqSideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletMagnetismScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* Target;
    
    STARBREEZE_API FSBZTargetCandidate();
};


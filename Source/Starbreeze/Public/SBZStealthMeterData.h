#pragma once
#include "CoreMinimal.h"
#include "SBZStealthMeterData.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct FSBZStealthMeterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZAICharacter> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertLevelPercentage;
    
    STARBREEZE_API FSBZStealthMeterData();
};


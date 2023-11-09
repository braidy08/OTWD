#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESBZAIRoleAggressiveness.h"
#include "ESBZNumericComparison.h"
#include "SBZEnvQueryTest_Aggressiveness.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEnvQueryTest_Aggressiveness : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIRoleAggressiveness Aggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison ComparisonMethod;
    
public:
    USBZEnvQueryTest_Aggressiveness();
};


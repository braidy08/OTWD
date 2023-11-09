#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESBZEvaluatePosition.h"
#include "SBZEnvQueryTest_DistanceToClosestFriendly.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_DistanceToClosestFriendly : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEvaluatePosition EvaluatePosition;
    
    USBZEnvQueryTest_DistanceToClosestFriendly();
};


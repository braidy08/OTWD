#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_DistanceToClosestFriendly.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_DistanceToClosestFriendly : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EvaluatePosition;
    
    USBZEnvQueryTest_DistanceToClosestFriendly();

};


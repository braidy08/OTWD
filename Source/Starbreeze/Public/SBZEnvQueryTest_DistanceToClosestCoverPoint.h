#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SBZEnvQueryTest_DistanceToClosestCoverPoint.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_DistanceToClosestCoverPoint : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    USBZEnvQueryTest_DistanceToClosestCoverPoint();

};


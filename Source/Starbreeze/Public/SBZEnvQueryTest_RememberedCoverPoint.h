#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_RememberedCoverPoint.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SBZEnvQueryTest_RememberedCoverPoint : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> AgentContext;
    
    UDEPRECATED_SBZEnvQueryTest_RememberedCoverPoint();

};


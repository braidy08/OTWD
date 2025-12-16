#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_NoFriendlyFire.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEnvQueryTest_NoFriendlyFire : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> EnemyContext;
    
public:
    USBZEnvQueryTest_NoFriendlyFire();

};


#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryTest_ValidateShootingPoint.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class USBZEnvQueryTest_ValidateShootingPoint : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TargetContext;
    
    USBZEnvQueryTest_ValidateShootingPoint();
};


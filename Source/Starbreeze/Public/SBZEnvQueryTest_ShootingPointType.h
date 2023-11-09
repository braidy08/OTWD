#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESBZEnvQueryTest_ShootingPointTypeMatchType.h"
#include "SBZEnvQueryTest_ShootingPointType.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_ShootingPointType : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEnvQueryTest_ShootingPointTypeMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShootingPointTypes;
    
    USBZEnvQueryTest_ShootingPointType();
};


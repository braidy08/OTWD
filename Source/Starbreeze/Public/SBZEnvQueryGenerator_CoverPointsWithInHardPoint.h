#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "SBZEnvQueryGenerator_CoverPointsWithInHardPoint.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_SBZEnvQueryGenerator_CoverPointsWithInHardPoint : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue MaxCovers;
    
    UDEPRECATED_SBZEnvQueryGenerator_CoverPointsWithInHardPoint();
};


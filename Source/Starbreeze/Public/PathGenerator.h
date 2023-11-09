#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GeneratedPath.h"
#include "PathNetworkData.h"
#include "PathGenerator.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API APathGenerator : public AInfo {
    GENERATED_BODY()
public:
    APathGenerator();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetGeneratedPath(UPARAM(Ref) FGeneratedPath& OutGeneratedPath, const FPathNetworkData& NetworkData);
    
};


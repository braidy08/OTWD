#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GeneratedPath.h"
#include "PathNetworkData.h"
#include "PathResultProcessor.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API APathResultProcessor : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassedValidation;
    
public:
    APathResultProcessor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ProcessResult(const FPathNetworkData& NetworkData, UPARAM(Ref) FGeneratedPath& ResultPath);
    
};


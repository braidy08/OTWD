#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GamePropertyConfig.generated.h"

class USBZGameProperty;

USTRUCT(BlueprintType)
struct FGamePropertyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameProperty> PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    STARBREEZE_API FGamePropertyConfig();
};


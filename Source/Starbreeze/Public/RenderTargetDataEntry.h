#pragma once
#include "CoreMinimal.h"
#include "RenderTargetDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FRenderTargetDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastIndex;
    
    STARBREEZE_API FRenderTargetDataEntry();
};


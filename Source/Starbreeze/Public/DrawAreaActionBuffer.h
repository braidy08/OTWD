#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DrawAreaActionBuffer.generated.h"

USTRUCT(BlueprintType)
struct FDrawAreaActionBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> Points;
    
    STARBREEZE_API FDrawAreaActionBuffer();
};


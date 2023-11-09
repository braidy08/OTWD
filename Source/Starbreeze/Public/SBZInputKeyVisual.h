#pragma once
#include "CoreMinimal.h"
#include "SBZInputKeyVisual.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZInputKeyVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FSBZInputKeyVisual();
};


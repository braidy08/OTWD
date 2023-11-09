#pragma once
#include "CoreMinimal.h"
#include "OTWDGateIconUI.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOTWDGateIconUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SecuredIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BreachedIcon;
    
    OTWD_API FOTWDGateIconUI();
};


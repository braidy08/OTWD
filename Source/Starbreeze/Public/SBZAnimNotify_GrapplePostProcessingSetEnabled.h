#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZAnimNotify_GrapplePostProcessingSetEnabled.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_GrapplePostProcessingSetEnabled : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    USBZAnimNotify_GrapplePostProcessingSetEnabled();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZAnimNotify_BaseNotify.h"
#include "AnimNotify_GrappleSetKnifeEnabled.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_GrappleSetKnifeEnabled : public USBZAnimNotify_BaseNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableKnife;
    
    UAnimNotify_GrappleSetKnifeEnabled();
};


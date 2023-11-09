#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZAnimNotifyState_ForbidHurtAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAnimNotifyState_ForbidHurtAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZAnimNotifyState_ForbidHurtAnimation();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBZAnimNotifyState_ForbidKnockbackAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAnimNotifyState_ForbidKnockbackAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USBZAnimNotifyState_ForbidKnockbackAnimation();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_JammedWeaponStateReached.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_JammedWeaponStateReached : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_JammedWeaponStateReached();
};


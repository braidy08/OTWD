#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EmptyWeaponStateReached.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_EmptyWeaponStateReached : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_EmptyWeaponStateReached();
};


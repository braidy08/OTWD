#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AllowMeleeCombos.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API UAnimNotify_AllowMeleeCombos : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_AllowMeleeCombos();
};


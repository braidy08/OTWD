#pragma once
#include "CoreMinimal.h"
#include "SBZUnlockable.h"
#include "SBZQuest.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class STARBREEZE_API USBZQuest : public USBZUnlockable {
    GENERATED_BODY()
public:
    USBZQuest();
};


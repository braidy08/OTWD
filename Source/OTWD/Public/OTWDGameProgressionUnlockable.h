#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZUnlockable.h"
#include "OTWDGameProgressionUnlockable.generated.h"

UCLASS(Blueprintable, Const)
class OTWD_API UOTWDGameProgressionUnlockable : public USBZUnlockable {
    GENERATED_BODY()
public:
    UOTWDGameProgressionUnlockable();

};


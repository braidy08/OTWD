#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMeleeDamagePattern.generated.h"

UCLASS(Abstract, Blueprintable, Const, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZMeleeDamagePattern : public UObject {
    GENERATED_BODY()
public:
    USBZMeleeDamagePattern();
};


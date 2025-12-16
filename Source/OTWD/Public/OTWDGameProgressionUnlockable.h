#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZUnlockable -FallbackName=SBZUnlockable
#include "OTWDGameProgressionUnlockable.generated.h"

UCLASS(Blueprintable, Const)
class OTWD_API UOTWDGameProgressionUnlockable : public USBZUnlockable {
    GENERATED_BODY()
public:
    UOTWDGameProgressionUnlockable();

};


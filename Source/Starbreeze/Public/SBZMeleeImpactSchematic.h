#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeWeaponType.h"
#include "SBZImpactSchematic.h"
#include "SBZMeleeImpactData.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeImpactSchematic.generated.h"

class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMeleeImpactSchematic : public USBZImpactSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeWeaponType, FSBZMeleeImpactData> MeleeWeaponTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ImpactFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeWeaponType, TSubclassOf<USBZLocalPlayerFeedback>> MeleeTypeFeedbackOverride;
    
    USBZMeleeImpactSchematic();
};


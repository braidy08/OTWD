#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationCollection.h"
#include "SBZPedestalCharacterWeaponAnimationCollection.generated.h"

class ASBZPlayerCharacter;
class USBZPedestalWeaponAnimationCollection;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPedestalCharacterWeaponAnimationCollection : public USBZAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPedestalWeaponAnimationCollection* Fallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZPlayerCharacter>, USBZPedestalWeaponAnimationCollection*> CharacterMap;
    
    USBZPedestalCharacterWeaponAnimationCollection();
};


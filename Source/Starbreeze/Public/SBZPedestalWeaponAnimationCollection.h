#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "SBZAnimationCollection.h"
#include "SBZPedestalWeaponAnimationCollection.generated.h"

class ASBZWeapon;
class USBZPedestalAnimationCollection;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPedestalWeaponAnimationCollection : public USBZAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZWeapon>, USBZPedestalAnimationCollection*> WeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZWeaponFamily, USBZPedestalAnimationCollection*> WeaponFamilyFallbackMap;
    
    USBZPedestalWeaponAnimationCollection();
};


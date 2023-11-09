#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZAIThrowWeapon.generated.h"

class USBZAIAimThrowSchematic;
class USBZThrownWeaponAISchematic;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZAIThrowWeapon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowWeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrownWeaponAISchematic* WeaponSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAIAimThrowSchematic* AimSchematic;
    
    USBZAIThrowWeapon();
};


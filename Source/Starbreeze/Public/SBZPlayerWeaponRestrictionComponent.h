#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZWeaponSlotType.h"
#include "SBZPlayerWeaponRestrictionComponent.generated.h"

class ASBZPlayerCharacter;
class USBZPlayerActionHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerWeaponRestrictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZWeaponSlotType> RestrictedWeaponSlotTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerActionHandler* OwningPlayerActionHandler;
    
public:
    USBZPlayerWeaponRestrictionComponent();
};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "SBZPropertyProvider.h"
#include "SBZBTDecorator_WeaponSchematic.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBTDecorator_WeaponSchematic : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropertyProvider Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
    USBZBTDecorator_WeaponSchematic();

};


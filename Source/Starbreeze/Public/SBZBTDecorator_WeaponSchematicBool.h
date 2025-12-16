#pragma once
#include "CoreMinimal.h"
#include "SBZBTDecorator_WeaponSchematic.h"
#include "SBZBTDecorator_WeaponSchematicBool.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_WeaponSchematicBool : public USBZBTDecorator_WeaponSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComparison;
    
    USBZBTDecorator_WeaponSchematicBool();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "SBZDoorAction.h"
#include "SBZSchematic.h"
#include "SBZDoorActionsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorActionsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDoorActionType, FSBZDoorAction> Actions;
    
public:
    USBZDoorActionsSchematic();
};


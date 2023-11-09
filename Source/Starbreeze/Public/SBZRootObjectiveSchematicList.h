#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZRootObjectiveSchematicList.generated.h"

class USBZObjectiveSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZRootObjectiveSchematicList : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZObjectiveSchematic*> Objectives;
    
    USBZRootObjectiveSchematicList();
};


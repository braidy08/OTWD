#pragma once
#include "CoreMinimal.h"
#include "SBZBaseSpawnBehaviour.h"
#include "SBZActSpawnBehaviour.generated.h"

class USBZAct;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZActSpawnBehaviour : public USBZBaseSpawnBehaviour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAct* Act;
    
    USBZActSpawnBehaviour();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAISchematic_SenseOverride.generated.h"

class UAISenseConfig;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAISchematic_SenseOverride : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper AlertnessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    USBZAISchematic_SenseOverride();
};


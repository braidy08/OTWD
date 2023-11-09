#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAISchematic_SenseProfile.generated.h"

class UAISenseConfig;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAISchematic_SenseProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    USBZAISchematic_SenseProfile();
};


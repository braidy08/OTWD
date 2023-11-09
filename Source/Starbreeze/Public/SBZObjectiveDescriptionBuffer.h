#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZObjectiveDescriptionBuffer.generated.h"

class USBZObjectiveDescriptionWidget;
class USBZSubObjectiveDescriptionWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZObjectiveDescriptionBuffer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectiveDescriptionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SubObjectiveDescriptionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZObjectiveDescriptionWidget*> ObjectiveDescriptionBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZSubObjectiveDescriptionWidget*> SubObjectiveDescriptionBuffer;
    
public:
    USBZObjectiveDescriptionBuffer();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZPropertyModifier.generated.h"

class USBZGameProperty;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPropertyModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameProperty* TargetProperty;
    
public:
    USBZPropertyModifier();
};


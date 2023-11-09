#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBlackboardObjectArray.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBlackboardObjectArray : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    USBZBlackboardObjectArray();
};


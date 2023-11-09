#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZRandomized.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZRandomized : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZRandomized : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSeed(const int32 NewSeed);
    
};


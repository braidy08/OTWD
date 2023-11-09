#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZWoundCapable.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZWoundCapable : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZWoundCapable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RefreshWounds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ApplyWound(const int32 WoundIndex);
    
};


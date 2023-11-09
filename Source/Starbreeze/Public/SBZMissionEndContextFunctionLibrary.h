#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZMissionEndContext.h"
#include "SBZMissionEndContextHandle.h"
#include "SBZMissionEndContextFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class USBZMissionEndContextFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMissionEndContextFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZMissionEndContext GetStandardMissionEndContext(const FSBZMissionEndContextHandle& ContextHandle, bool& bIsValid);
    
};


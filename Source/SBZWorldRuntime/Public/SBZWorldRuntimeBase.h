#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWorldRuntimeBase.generated.h"

class USBZWorldRuntimeBase;

UCLASS(Blueprintable, Transient)
class SBZWORLDRUNTIME_API USBZWorldRuntimeBase : public UObject {
    GENERATED_BODY()
public:
    USBZWorldRuntimeBase();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWorldRuntimeBase* GetWorldRuntime(const UObject* WorldContextObject);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZUnlockable.h"
#include "SBZCosmetic.generated.h"

class USBZCosmetic;
class USBZUnlockableMetadata;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZCosmetic : public USBZUnlockable {
    GENERATED_BODY()
public:
    USBZCosmetic();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<USBZCosmetic> GetUnlockableAsCosmetic(const USBZUnlockableMetadata* UnlockableMetadata);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZUnlockable.generated.h"

class USBZUnlockableMetadata;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZUnlockable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* MetaData;
    
    USBZUnlockable();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool MeetsAllRequirements(const UObject* WorldContextObject) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZUnlockableMetadataCollection.h"
#include "SBZPawnTechCollection.generated.h"

class USBZUnlockableMetadata;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPawnTechCollection : public USBZUnlockableMetadataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> DefaultTechsMetadata;
    
    USBZPawnTechCollection();
};


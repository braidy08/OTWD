#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SBZCosmeticTypeHelper.generated.h"

class USBZCosmetic;

UCLASS(Abstract, Blueprintable, Const, EditInlineNew)
class STARBREEZE_API USBZCosmeticTypeHelper : public UObject {
    GENERATED_BODY()
public:
    USBZCosmeticTypeHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTypeIndex(const TSubclassOf<USBZCosmetic>& CosmeticSubclass) const;
    
};


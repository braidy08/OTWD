#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZCosmeticArray.h"
#include "SBZCosmeticCollection.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZCosmeticCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCosmeticArray> AllArray;
    
    USBZCosmeticCollection();
};


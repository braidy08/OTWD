#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZAutoPickUpItemCount.generated.h"

class ASBZAutoPickUpItem;

USTRUCT(BlueprintType)
struct FSBZAutoPickUpItemCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAutoPickUpItem> PickupItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    STARBREEZE_API FSBZAutoPickUpItemCount();
};


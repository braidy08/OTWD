#pragma once
#include "CoreMinimal.h"
#include "SBZAutoPickUpItemCount.h"
#include "SBZAutoPickUpItemPerItemGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAutoPickUpItemPerItemGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAutoPickUpItemCount> AddedResources;
    
    FSBZAutoPickUpItemPerItemGameplayEffect();
};


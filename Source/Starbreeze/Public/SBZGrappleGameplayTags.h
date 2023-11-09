#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGrappleGameplayTags.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleGameplayTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StuggleInstaKill;
    
    FSBZGrappleGameplayTags();
};


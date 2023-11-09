#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayTagUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayTagUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FSBZGameplayTagUIData();
};


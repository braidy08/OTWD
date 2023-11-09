#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAbilityInput.h"
#include "SBZAbilityResourceData.h"
#include "SBZAbilityData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityInput UseAbilityInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AbilityMaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityMaxInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityResourceData;
    
    FSBZAbilityData();
};


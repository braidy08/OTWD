#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAbilityElementResource.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAbilityElementResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MaterialValueName;
    
    FSBZAbilityElementResource();
};


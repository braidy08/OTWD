#pragma once
#include "CoreMinimal.h"
#include "SBZAbilityUIData.generated.h"

class UGameplayAbility;
class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAbilityUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UGameplayAbility>> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FSBZAbilityUIData();
};


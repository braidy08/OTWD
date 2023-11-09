#pragma once
#include "CoreMinimal.h"
#include "ESBZNumericComparison.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayEffectComparison.generated.h"

class UGameplayEffect;
class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayEffectComparison {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison ComparisonMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FailedIcon;
    
    FSBZGameplayEffectComparison();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayEffectUIData.generated.h"

class UGameplayEffect;
class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FSBZGameplayEffectUIData();
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayEffectData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameplayEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    FSBZGameplayEffectData();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "ESBZPeekingState.h"
#include "SBZGameplayAbility_PlayerPeek.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayAbility_PlayerPeek : public UGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPeekingState TargetPeekState;
    
public:
    USBZGameplayAbility_PlayerPeek();
};


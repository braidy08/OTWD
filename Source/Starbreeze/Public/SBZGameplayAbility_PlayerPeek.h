#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbility -FallbackName=GameplayAbility
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


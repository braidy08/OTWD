#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZCompositeGameplayAbilityQuery.generated.h"

class USBZGameplayAbilityQuery;
class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZCompositeGameplayAbilityQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGameplayAbilityQuery*> Queries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstFailedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FailedIcon;
    
    FSBZCompositeGameplayAbilityQuery();
};


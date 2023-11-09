#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGrappleTags.h"
#include "SBZPlayerTakedownDirection.h"
#include "SBZPlayerTakedownTargetStateBuffer.h"
#include "SBZPlayerTakedownTargetSettings.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZAICharacter>> TargetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrappleTags> TargetTagSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownDirection> TakedownDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownTargetStateBuffer> TargetStateBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TargetTagsAllowAnyTakedown;
    
    FSBZPlayerTakedownTargetSettings();
};


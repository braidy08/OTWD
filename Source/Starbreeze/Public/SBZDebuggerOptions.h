#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIDebuggerOptions.h"
#include "SBZPlayerDebuggerOptions.h"
#include "SBZUIDebuggerOptions.h"
#include "SBZDebuggerOptions.generated.h"

UCLASS(Blueprintable, Config=DoNotSubmit)
class STARBREEZE_API USBZDebuggerOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIDebuggerOptions AIOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlayerDebuggerOptions PlayerOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIDebuggerOptions UIOptions;
    
    USBZDebuggerOptions();
    UFUNCTION(BlueprintCallable)
    static bool ShouldSkipIntroMovies();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerAutomaticallyInvisibleForAI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHeadBobbingDisabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGodModeAutomaticallyEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFallDamageDisabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAIDisabled();
    
};


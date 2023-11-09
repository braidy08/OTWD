#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZGrappleUIProperties.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleUIProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StrugglePromptWidgetBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrugglePromptInactivityDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrugglePromptHideAfterInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrugglePromptAlwaysShowWithMultipleAttackers;
    
    FSBZGrappleUIProperties();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZBasePlayerAction.h"
#include "SBZInfoMenuAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZInfoMenuAction : public USBZBasePlayerAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InfoMenuTag;
    
public:
    USBZInfoMenuAction();
};


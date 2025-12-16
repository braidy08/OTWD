#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DrawOnTop.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API UAnimNotifyState_DrawOnTop : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawOnTop;
    
public:
    UAnimNotifyState_DrawOnTop();

};


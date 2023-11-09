#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_WarpingBase.h"
#include "SBZAnimNotifyState_WarpingTranslation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAnimNotifyState_WarpingTranslation : public UAnimNotifyState_WarpingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReferenceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OffsetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReferenceTime;
    
    USBZAnimNotifyState_WarpingTranslation();
};


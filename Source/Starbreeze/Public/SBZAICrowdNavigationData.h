#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZAICrowdNavigationData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAICrowdNavigationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCrowdSeparation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SeparationWeightInterval;
    
    USBZAICrowdNavigationData();
};


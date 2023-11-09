#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "SBZDoorAnimDatas.h"
#include "SBZSchematic.h"
#include "SBZDoorAnimationCollectionSchematic.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorAnimationCollectionSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDoorActionType, TSoftObjectPtr<UAnimSequence>> AnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationReconcilingBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAnimSequence>, FSBZDoorAnimDatas> BoneLocationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReCache;
    
public:
    USBZDoorAnimationCollectionSchematic();
};


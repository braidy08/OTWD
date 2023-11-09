#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "OTWDAnimNotify_PlayHitDoorSound.generated.h"

class UOTWDHitDoorSoundSchematic;

UCLASS(Blueprintable, CollapseCategories)
class OTWD_API UOTWDAnimNotify_PlayHitDoorSound : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDHitDoorSoundSchematic* Schematic;
    
public:
    UOTWDAnimNotify_PlayHitDoorSound();
};


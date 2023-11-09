#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESBZLadderSoundType.h"
#include "SBZAnimNotify_PlayLadderClimbingSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_PlayLadderClimbingSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZLadderSoundType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
    USBZAnimNotify_PlayLadderClimbingSound();
};


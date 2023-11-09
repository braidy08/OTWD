#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SBZAnimNotify_SpawnSoundEffectActor.generated.h"

class ASBZSoundEffectActor;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_SpawnSoundEffectActor : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZSoundEffectActor> SoundEffectActorClass;
    
public:
    USBZAnimNotify_SpawnSoundEffectActor();
};


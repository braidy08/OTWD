#pragma once
#include "CoreMinimal.h"
#include "ActorSaveChunk.h"
#include "ObjectSaveChunk.h"
#include "SBZSaveData.h"
#include "SBZGameSave.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZGameSave : public USBZSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectSaveChunk> Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorSaveChunk> ActorChunks;
    
    USBZGameSave();
};


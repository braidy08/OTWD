#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDSurvivorVoiceDataAsset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class OTWD_API UOTWDSurvivorVoiceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CharacterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CharacterCampEvent;
    
    UOTWDSurvivorVoiceDataAsset();
};


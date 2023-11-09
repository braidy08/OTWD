#pragma once
#include "CoreMinimal.h"
#include "SBZCinematicLoadingData.generated.h"

class ULocalizedOverlays;
class UMediaSource;
class USBZLevelSchematic;
class UWorld;

USTRUCT(BlueprintType)
struct FSBZCinematicLoadingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* CinematicVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalizedOverlays* LocalizedSubtitles;
    
    STARBREEZE_API FSBZCinematicLoadingData();
};


#pragma once
#include "CoreMinimal.h"
#include "SBZOutroMovieConfig.generated.h"

class UFileMediaSource;
class ULocalizedOverlays;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZOutroMovieConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalizedOverlays* Subtitles;
    
    FSBZOutroMovieConfig();
};


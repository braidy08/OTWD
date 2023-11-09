#pragma once
#include "CoreMinimal.h"
#include "ESBZNewsfeedImageDownloaderResult.generated.h"

UENUM(BlueprintType)
enum class ESBZNewsfeedImageDownloaderResult : uint8 {
    ImageFetchNone,
    ImageFetchStarted,
    ImageFetchURLFetchFailed,
    ImageFetchFailed,
    ImageFetchNoData,
    ImageFetchTextureLoadingFailed,
    ImageFetchTextureKeyNotFound,
    ImageFetchTextureWrongIndex,
    ImageFetchOK,
};


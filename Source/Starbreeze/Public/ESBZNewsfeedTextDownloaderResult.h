#pragma once
#include "CoreMinimal.h"
#include "ESBZNewsfeedTextDownloaderResult.generated.h"

UENUM(BlueprintType)
enum class ESBZNewsfeedTextDownloaderResult : uint8 {
    NewsFetchNone,
    NewsFetchLastDateTimeRetrievalStarted,
    NewsFetchLastDateTimeRetrievalFailed,
    NewsFetchLastDateTimeRetrievalOK,
    NewsFetchStarted,
    NewsFetchFailed,
    NewsFetchOK,
    NewsFetchNoNewsAvailable,
    NewsUpdateUserDataFailed,
    NewsUpdateUserDataOK,
};


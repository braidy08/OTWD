#pragma once
#include "CoreMinimal.h"
#include "ESBZNewsfeedImageDownloaderResult.h"
#include "ESBZNewsfeedTextDownloaderResult.h"
#include "SBZNewsfeedDataMap.h"
#include "NewsfeedFetchCompletedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FNewsfeedFetchCompletedSignature, bool, bSucceeded, ESBZNewsfeedTextDownloaderResult, TextDownloaderResult, ESBZNewsfeedImageDownloaderResult, ImageDownloaderResult, const FSBZNewsfeedDataMap&, Newfseed);


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NewsfeedFetchCompletedSignatureDelegate.h"
#include "SBZNewsfeedBlueprintLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class STARBREEZE_API USBZNewsfeedBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZNewsfeedBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void FetchNewsfeed(const APlayerController* PlayerController, const FNewsfeedFetchCompletedSignature& NewsfeedFetchCompleted);
    
};


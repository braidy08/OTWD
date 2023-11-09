#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZPlatformPurchasing.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlatformPurchasing : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZPlatformPurchasing();
    UFUNCTION(BlueprintCallable)
    bool GetPurchasedReceipts(const APlayerController* PlayerController, TArray<FString>& outIds);
    
};


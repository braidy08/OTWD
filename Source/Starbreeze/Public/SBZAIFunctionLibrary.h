#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAIFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidOrientation(const FQuat& Orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidDirection(const FVector& Direction);
    
};


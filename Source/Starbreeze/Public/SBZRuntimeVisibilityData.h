#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESBZVisibilityResult.h"
#include "SBZRuntimeVisibilityData.generated.h"

class UObject;
class USBZRuntimeVisibilityData;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZRuntimeVisibilityData : public UDataAsset {
    GENERATED_BODY()
public:
    USBZRuntimeVisibilityData();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ESBZVisibilityResult K2_IsPointVisibleFromPoints(const UObject* WorldContextObject, const FVector& Target, const TArray<FVector>& Sources) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ESBZVisibilityResult K2_IsBoxVisibleFromPoints(const UObject* WorldContextObject, const FBox& Target, const TArray<FVector>& Sources) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ESBZVisibilityResult IsPointVisibleFromPoint(const UObject* WorldContextObject, const FVector& Target, const FVector& Source) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ESBZVisibilityResult IsBoxVisibleFromPoint(const UObject* WorldContextObject, const FBox& Target, const FVector& Source) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZRuntimeVisibilityData* GetRuntimeVisibilityData(const UObject* WorldContextObject);
    
};


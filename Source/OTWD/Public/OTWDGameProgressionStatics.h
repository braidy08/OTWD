#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OTWDGameProgressionStatics.generated.h"

class UOTWDGameProgressionRootDataAsset;
class UObject;
class USBZCharacterSchematic;
class USBZLevelGroupSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDGameProgressionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDGameProgressionStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTimeLimitedVendorUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLevelUnlockOverrideActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLevelGroupCamp(USBZLevelGroupSchematic* InLevelGroupSchematic);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsCharacterLockedByGameProgression(const UObject* WorldContextObject, const TSoftObjectPtr<USBZCharacterSchematic>& InCharacterData);
    
    UFUNCTION(BlueprintCallable)
    static UOTWDGameProgressionRootDataAsset* GetGameProgressionRootData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZLevelGroupSchematic* GetActiveCamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AreWeekliesActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreNoCampsActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool AreBountiesActive(const UObject* WorldContextObject);
    
};


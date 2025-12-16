#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "SBZSaveData.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserUniqueNetIdString;
    
    USBZSaveData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Wipe(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Validate(const UObject* WorldContextObject, bool bIsSaving);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Save(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void LogSaveData(const UObject* WorldContextObject) const;
    
};


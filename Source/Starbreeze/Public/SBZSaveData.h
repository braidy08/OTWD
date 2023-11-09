#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SBZSaveData.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class STARBREEZE_API USBZSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserUniqueNetIdString;
    
    USBZSaveData();
    UFUNCTION(BlueprintCallable)
    void Wipe();
    
    UFUNCTION(BlueprintCallable)
    void Validate(bool bIsSaving);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Save(const UObject* WorldContextObject);
    
};


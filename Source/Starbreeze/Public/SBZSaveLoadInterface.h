#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZSaveLoadInterface.generated.h"

class USBZGameSave;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZSaveLoadInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZSaveLoadInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSave(USBZGameSave* GameSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnLoad(USBZGameSave* GameSave);
    
};


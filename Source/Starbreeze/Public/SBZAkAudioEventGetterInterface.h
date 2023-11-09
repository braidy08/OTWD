#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZAkAudioEventGetterInterface.generated.h"

class UAkAudioEvent;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZAkAudioEventGetterInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZAkAudioEventGetterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAkAudioEvent* GetAudioEvent() const;
    
};


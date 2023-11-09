#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OTWDMonsterClosetAttachmentInterface.generated.h"

UINTERFACE(Blueprintable)
class OTWD_API UOTWDMonsterClosetAttachmentInterface : public UInterface {
    GENERATED_BODY()
};

class OTWD_API IOTWDMonsterClosetAttachmentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMediumNoiseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLightNoiseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeavyNoiseEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreachEvent();
    
};


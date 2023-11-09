#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAIRoamingVolumeManager.generated.h"

class USBZAIRoamingVolumeManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIRoamingVolumeManager : public UObject {
    GENERATED_BODY()
public:
    USBZAIRoamingVolumeManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZAIRoamingVolumeManager* GetAIRoamingVolumeManagerFromWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZAIRoamingVolumeManager* GetAIRoamingVolumeManager(UObject* WorldContextObject);
    
};


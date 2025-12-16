#pragma once
#include "CoreMinimal.h"
#include "SBZWorldRuntime.h"
#include "OTWDWorldRuntime.generated.h"

class UOTWDWorldRuntime;
class UObject;
class USBZActorContainer;

UCLASS(Blueprintable, NonTransient)
class UOTWDWorldRuntime : public USBZWorldRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllZombiePawns;
    
    UOTWDWorldRuntime();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UOTWDWorldRuntime* Get(const UObject* WorldContextObject);
    
};


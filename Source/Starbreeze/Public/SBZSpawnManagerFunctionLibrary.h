#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "ESBZRequestGroupStatus.h"
#include "PawnDynamicDelegateDelegate.h"
#include "RequestDynamicDelegateDelegate.h"
#include "SBZPawnTypeRequest.h"
#include "SBZRequestGroupHandle.h"
#include "SBZRequestGroupOptions.h"
#include "SBZSpawnManagerFunctionLibrary.generated.h"

class APawn;
class UObject;

UCLASS(Blueprintable)
class USBZSpawnManagerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZSpawnManagerFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForRequestGroup(const UObject* WorldContextObject, FSBZRequestGroupHandle Handle, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APawn*> RequestPawnTypesImmediately(const UObject* WorldContextObject, const TArray<FSBZPawnTypeRequest>& Requests, FSBZRequestGroupOptions Options, FName DebugName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZRequestGroupHandle RequestPawnTypes(const UObject* WorldContextObject, const TArray<FSBZPawnTypeRequest>& Requests, const FPawnDynamicDelegate& PawnSpawned, const FRequestDynamicDelegate& RequestStopped, FSBZRequestGroupOptions Options, FName DebugName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZRequestGroupStatus GetStatus(const FSBZRequestGroupHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRequestCount(const FSBZRequestGroupHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZPawnTypeRequest GetRequest(const FSBZRequestGroupHandle& Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<APawn*> GetCreatedPawns(const FSBZRequestGroupHandle& Handle, bool bIncludeMissingPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CancelRequestGroup(const FSBZRequestGroupHandle& Handle);
    
};


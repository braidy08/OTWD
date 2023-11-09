#pragma once
#include "CoreMinimal.h"
#include "SBZUIManager.h"
#include "OnWBPLoadedDelegate.h"
#include "OTWDUIManager.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class OTWD_API UOTWDUIManager : public USBZUIManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDWidgetsVisibilityChanged, int32, VisibilityMask);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalWidgetsVisibilityChanged, int32, VisibilityMask);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalWidgetsVisibilityChanged OnGlobalWidgetsVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDWidgetsVisibilityChanged OnHUDWidgetsVisibilityChanged;
    
    UOTWDUIManager();
    UFUNCTION(BlueprintCallable)
    void RequestWBPLoad(UUserWidget* RequestingWidget, FName WidgetName, TSoftClassPtr<UUserWidget> WBPSoftClassToLoad, FOnWBPLoaded Callback);
    
    UFUNCTION(BlueprintCallable)
    bool GetCvarState(const FString& Cvar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildVersion();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeHUDWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeGlobalWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask);
    
};


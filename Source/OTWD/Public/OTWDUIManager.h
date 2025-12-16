#pragma once
#include "CoreMinimal.h"
#include "SBZUIManager.h"
#include "OnGlobalWidgetsVisibilityChangedDelegate.h"
#include "OnHUDWidgetsVisibilityChangedDelegate.h"
#include "OnSettingsTabForceSelectedDelegate.h"
#include "OnWBPLoadedDelegate.h"
#include "OTWDUIManager.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class OTWD_API UOTWDUIManager : public USBZUIManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalWidgetsVisibilityChanged OnGlobalWidgetsVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDWidgetsVisibilityChanged OnHUDWidgetsVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsTabForceSelected OnSettingsTabForceSelected;
    UOTWDUIManager();
    UFUNCTION(BlueprintCallable)
    void RequestWBPLoad(UUserWidget* RequestingWidget, FName WidgetName, TSoftClassPtr<UUserWidget> WBPSoftClassToLoad, FOnWBPLoaded Callback);
    
    UFUNCTION(BlueprintCallable)
    bool GetCvarState(const FString& Cvar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBuildVersion();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceShowSettingsTab(UObject* WorldContextObject, int32 TabIndex);
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeHUDWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeGlobalWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZSkyboundCheckInsiderDelegateDelegate.h"
#include "SBZSkyboundRegisterUserDelegateDelegate.h"
#include "SBZSkyboundUpdateGameEventDelegateDelegate.h"
#include "SBZSkyboundRegistrationAPI.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZSkyboundRegistrationAPI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkyboundCheckInsiderDelegate OnSkyboundCheckInsiderDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkyboundRegisterUserDelegate OnSkyboundRegisterUserDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSkyboundUpdateGameEventDelegate OnSkyboundUpdateGameEventDelegate;
    
    USBZSkyboundRegistrationAPI();
    UFUNCTION(BlueprintCallable)
    void UpdateGameEvent(int32 InEventId, const FString& InEventValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterUser(const FString& InUserEmail);
    
    UFUNCTION(BlueprintCallable)
    void LogOut();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidEmail(const FString& InEmail);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoggedInToSkybound();
    
    UFUNCTION(BlueprintCallable)
    void CheckIsSkyBoundInsider(const FString& InUserEmail);
    
};


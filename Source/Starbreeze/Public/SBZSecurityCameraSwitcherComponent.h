#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPossessSuccessfulDelegate.h"
#include "OnUnableToPossessDelegate.h"
#include "SBZSecurityCameraSwitcherComponent.generated.h"

class ACharacter;
class ASBZSecurityCameraPossessable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSecurityCameraSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnableToPossess OnUnableToPossess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossessSuccessful OnPossessSuccessful;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSecurityCameraPossessable*> SecurityCameras;
    
public:
    USBZSecurityCameraSwitcherComponent();
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PossessSecurityCamera(ACharacter* Character);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PossessSecurityCamera(ACharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UnableToPossess();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPossessSuccessful();
    
    UFUNCTION(BlueprintCallable)
    void AddSecurityCamera(ASBZSecurityCameraPossessable* SecurityCamera);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZOnCrawlStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerCrawlComponent.generated.h"

class AActor;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USBZPlayerHelpStandInteractableComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerCrawlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCrawlStateChanged OnStartCrawling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCrawlStateChanged OnStopCrawling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPlayerHelpStandInteractableComponent> InteractableToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> UIWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerHelpStandInteractableComponent* SpawnedInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCrawling, meta=(AllowPrivateAccess=true))
    bool bIsCrawling;
    
public:
    USBZPlayerCrawlComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopCrawling();
    
    UFUNCTION(BlueprintCallable)
    void StartCrawling();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopCrawling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartCrawling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnTryToGetUpExit();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnTryToGetUpEnter();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnAimExit();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnAimEnter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCrawling(bool bOldValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerHelpSuccess(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Owner);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnStopCrawling();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrawling() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnTryToGetUpExit();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnTryToGetUpEnter();
    
};


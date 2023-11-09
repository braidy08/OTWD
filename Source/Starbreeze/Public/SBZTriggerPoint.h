#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OnAllItemsDelegate.h"
#include "OnAllPlayersAndItemsDelegate.h"
#include "OnAllPlayersEnteredDelegate.h"
#include "OnAllPlayersInsideDelegate.h"
#include "OnItemAddedDelegate.h"
#include "OnPassedFilterChangeDelegate.h"
#include "OnPlayerEnteredDelegate.h"
#include "OnPlayerLeftDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZTriggerPoint.generated.h"

class ASBZCharacter;
class ASBZPlayBubble;
class ASBZPlayerCharacter;
class UBoxComponent;
class UObject;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZTriggerPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, int32> ItemsNeeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPassedFilterChange OnPassedFiltersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEntered OnPlayerEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAdded OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllItems OnAllItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLeft OnPlayerLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersInside OnAllPlayersInsideChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersInside OnAllPlayersAndItemsInsideChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersAndItems OnAllPlayersAndItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersEntered OnAllPlayersEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayBubble* PlayBubble;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllPlayersEntered, meta=(AllowPrivateAccess=true))
    bool bAllPlayersEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllItems, meta=(AllowPrivateAccess=true))
    bool bAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FilterArePassed, meta=(AllowPrivateAccess=true))
    bool bFilterArePassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnPlayerEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnAllPlayersEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnPlayerLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnItemEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterOnAllPlayersAndItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemsInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZPlayerCharacter*, int32> CharactersInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayersInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayersAndItemsInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> ShapeComponents;
    
public:
    ASBZTriggerPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ToggleActiveServer(bool bIsActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleActive(bool bIsActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FilterArePassed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllPlayersEntered(bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllItems(bool bOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRemoved(UObject* Removed);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterKilled(ASBZCharacter* KilledPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterDestroyed(AActor* DestroyedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAdded(UObject* Added);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_OnPlayerLeft(ASBZPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_OnPlayerEntered(uint8 NumCharactersInZone, ASBZPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_OnItemEntered(uint8 NumItemsInZone, AActor* Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAllPlayersChanged(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleAllPlayersAndItemsChanged(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleAllPlayersAndItems();
    
    UFUNCTION(BlueprintCallable)
    void HandleAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void HandleAllItems();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZPlayerCharacter*> GetPlayersInZone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerLeft(ASBZPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerEntered(ASBZPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersChanged(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersAndItemsChanged(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllPlayersAndItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreFilterPassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllPlayersInZone() const;
    
};


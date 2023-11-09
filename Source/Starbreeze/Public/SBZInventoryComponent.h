#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnGiveToChangedDelegate.h"
#include "OnItemsChangedDelegate.h"
#include "OnTakeFromChangedDelegate.h"
#include "SBZInventoryItem.h"
#include "SBZInventoryComponent.generated.h"

class USBZInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsChanged OnItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGiveToChanged OnGiveToChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTakeFromChanged OnTakeFromChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=Rep_NotifyGiveToChanged, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryComponent*> GiveToInventoryComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=Rep_NotifyTakeFromChanged, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryComponent*> TakeFromInventoryComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=Rep_NotifyItemsChanged, meta=(AllowPrivateAccess=true))
    TArray<FSBZInventoryItem> ItemsArray;
    
public:
    USBZInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateItemsReplication();
    
public:
    UFUNCTION(BlueprintCallable)
    void TakeItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory);
    
    UFUNCTION(BlueprintCallable)
    void SetItems(const TArray<FSBZInventoryItem>& NewItems, bool bDropCurrentItems);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TakeItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GiveItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DropItem(const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    void Rep_NotifyTakeFromChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Rep_NotifyItemsChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void Rep_NotifyGiveToChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveTakeFromInventory(USBZInventoryComponent* TakeFromInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGiveToInventory(USBZInventoryComponent* GiveToInventoryComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void MoveItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory, bool bUpdateReplication);
    
    UFUNCTION(BlueprintCallable)
    void MoveAllItems(USBZInventoryComponent* OtherInventory, bool bUpdateReplication);
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZInventoryComponent*> GetTakeFromInventoryComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZInventoryItem> GetItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZInventoryComponent*> GetGiveToInventoryComponents() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugInventoryString();
    
    UFUNCTION(BlueprintCallable)
    void DropItem(const FGuid& Guid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearTakeFromInventoryComponents(bool bRemoveGiveTo);
    
    UFUNCTION(BlueprintCallable)
    void ClearGiveToInventoryComponents(bool bRemoveTakeFrom);
    
    UFUNCTION(BlueprintCallable)
    void AddTakeFromInventory(USBZInventoryComponent* TakeFromInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddGiveToInventory(USBZInventoryComponent* GiveToInventoryComponent);
    
};


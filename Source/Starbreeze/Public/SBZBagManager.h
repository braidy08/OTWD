#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnBagPickedupDelegate.h"
#include "OnPickedUpAllNeededDelegate.h"
#include "SBZBagManager.generated.h"

class ASBZBagItem;
class ASBZBagManager;
class ASBZCharacter;
class ASBZTriggerPoint;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBagManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateBagsSecured, const TArray<ASBZBagItem*>&, SecuredBags);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBagSecured, ASBZBagItem*, SecuredBag, ASBZTriggerPoint*, TriggerPoint, ASBZCharacter*, Character);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpAllNeeded OnPickedUpAllNeeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagPickedup OnPickedUpBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBagsNeeded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickedUpBags, meta=(AllowPrivateAccess=true))
    TArray<ASBZBagItem*> PickedUpBags;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagSecured OnSecuredBag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateBagsSecured OnUpdateSecuredBags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SecuredBags, meta=(AllowPrivateAccess=true))
    TArray<ASBZBagItem*> SecuredBags;
    
public:
    ASBZBagManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfBagsNeeded(int32 NumberNeeded);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SecureMultipleBags(const TArray<ASBZBagItem*>& BagsToSecure, ASBZTriggerPoint* TriggerPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    bool SecureBag_Internal(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SecureBag(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredBags(TArray<ASBZBagItem*> OldSecuredBags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickedUpBags(TArray<ASBZBagItem*> OldPickedUpBags);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SecureMultipleBags(const TArray<ASBZBagItem*>& BagsToSecure, ASBZTriggerPoint* TriggerPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SecureBag(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllNeededBags() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASBZBagItem*> GetSecuredBags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBagsPickedUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBagsNeeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZBagManager* GetBagManager(UObject* WorldContextObject);
    
};


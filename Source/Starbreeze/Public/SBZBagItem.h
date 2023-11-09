#pragma once
#include "CoreMinimal.h"
#include "OnBagItemPickedUpDelegate.h"
#include "OnBagItemThrownDelegate.h"
#include "SBZThrownItem.h"
#include "SBZBagItem.generated.h"

class USBZBagTypeSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBagItem : public ASBZThrownItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagTypeSchematic* BagType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagItemPickedUp OnBagItemPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagItemThrown OnBagItemThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSecureBagOnPickup;
    
public:
    ASBZBagItem();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_TriggerMissionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMissionEnd();
    
    UFUNCTION(BlueprintCallable)
    USBZBagTypeSchematic* GetBagType();
    
};


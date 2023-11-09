#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZItemInventoryManagement.generated.h"

class ASBZItemInventoryManagement;
class USBZInventoryItemManagementSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZItemInventoryManagement : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventoryItemManagementSchematic* InventoryItemManagementSchematic;
    
    ASBZItemInventoryManagement();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static ASBZItemInventoryManagement* GetItemInventoryManagement();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateZone(const FString& ZoneName);
    
};


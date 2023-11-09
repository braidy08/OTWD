#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SBZPropertyProvider.h"
#include "SBZBTTask_TransferWeaponSchematicData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_TransferWeaponSchematicData : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropertyProvider PropertyProvider;
    
public:
    USBZBTTask_TransferWeaponSchematicData();
};


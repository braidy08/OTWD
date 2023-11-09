#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "SBZWeaponPartMeshCondition.generated.h"

class ASBZWeapon;
class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponPartMeshCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnUsingConditionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* WeaponPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* MeshSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZWeaponFamily> WeaponFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZWeapon>> WeaponClasses;
    
    FSBZWeaponPartMeshCondition();
};


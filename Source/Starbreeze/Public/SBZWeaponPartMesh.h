#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartMeshCondition.h"
#include "SBZWeaponPartMesh.generated.h"

class USBZComponentTemplate;
class USBZWeaponPartSlot;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponPartMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* MeshSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZComponentTemplate> ComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPartMeshCondition> Conditions;
    
    FSBZWeaponPartMesh();
};


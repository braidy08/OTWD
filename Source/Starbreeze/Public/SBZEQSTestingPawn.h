#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "SBZFactionIdHelper.h"
#include "SBZEQSTestingPawn.generated.h"

class AActor;
class ASBZHardPoint;
class ASBZWeaponAI;
class USBZAICharacterSchematic;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* CharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZHardPoint* Hardpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZWeaponAI* InLevelWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
    ASBZEQSTestingPawn();
};


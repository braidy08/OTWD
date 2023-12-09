#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "SBZFactionIdHelper.h"
#include "OTWDQuestObjectiveIngameDataAsset.h"
#include "OTWDQuestObjectiveAIKilledDataAsset.generated.h"

class ASBZAICharacter;
class ASBZWeapon;

UCLASS(Blueprintable)
class UOTWDQuestObjectiveAIKilledDataAsset : public UOTWDQuestObjectiveIngameDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZAICharacter>> AICharactersToKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<ASBZWeapon>> ExactWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ESBZWeaponFamily> WeaponFamily;
    
 //   UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
 //   TSet<FSBZFactionIdHelper> Factions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresHeadshot;
    
    UOTWDQuestObjectiveAIKilledDataAsset();
};


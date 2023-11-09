#pragma once
#include "CoreMinimal.h"
#include "DamageTargetData.h"
#include "ESBZAIRoleAggressiveness.h"
#include "GamePropertyConfig.h"
#include "SBZAIActBehavior.h"
#include "SBZAIAggroSystemData.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZAlertnessStateAdditionalProperties.h"
#include "SBZAlertnessStateRecruitment.h"
#include "SBZMoveToInteractionData.h"
#include "SBZRecruitmentPolicies.h"
#include "SBZSchematic.h"
#include "SBZStateInfluenceData.h"
#include "SBZAISchematic.generated.h"

class UAISenseConfig;
class UDataTable;
class USBZAICrowdNavigationData;
class USBZAISchematic_SenseOverride;
class USBZAISchematic_SenseProfile;
class USBZClimbSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAICrowdNavigationData* CrowdNavigationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAISchematic_SenseOverride*> SensesConfigOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZAISchematic_SenseProfile*> SensesProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStateOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper ForceStateOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAlertnessOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerRecruitmentOnDamageStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStateInfluenceData> StateInfluenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSBZAlertnessLevelIdHelper, FSBZAlertnessStateRecruitment> Recruitment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRecruitmentPolicies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRecruitmentPolicies RecruitmentPolicies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSBZAlertnessLevelIdHelper, FSBZAlertnessStateAdditionalProperties> AdditionalProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamePropertyConfig> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTargetData> DamageTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmashDamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIAggroSystemData AggroSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZClimbSchematic* ClimbSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMoveToInteractionData> MoveToInteractionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIRoleAggressiveness CombatRoleAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIActBehavior AIActBehaviorTrees;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfluenceDataRead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStanceDataRead: 1;
    
public:
    USBZAISchematic();
};


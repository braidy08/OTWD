#pragma once
#include "CoreMinimal.h"
#include "EOTWDMetagameUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EOTWDMetagameUpgradeType : uint8 {
    MetagameUpgradeNone,
    MetagameUpgradeLoot,
    MetagameUpgradeExperience,
    MetagameUpgradeInjuryChance,
    MetagameUpgradeDeathChance,
    MetagameUpgradeMorale,
    MetagameUpgradeMissionLength,
    MetagameUpgradeUpkeepCost,
    MetagameUpgradeMoraleEffectOnBuildings,
    MetagameUpgradeSurvivorSlots,
    MetagameUpgradeMissionSlots,
    MetagameUpgradeMaxResources,
    MetagameUpgradeMaxMedicine,
    MetagameUpgradeInjuredPenaltyMission,
    MetagameUpgradePeggyAnnDiscount,
    MetagameUpgradeAndersonBounties,
};


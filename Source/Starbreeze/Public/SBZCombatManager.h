#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZCombatManager.generated.h"

class USBZFiringPermission;
class USBZFiringPermissionSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCombatManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZFiringPermissionSchematic* FiringPermissionData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GlobalDelayForAssigningRushersRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GlobalMaxCapOfRushersRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForWarningShot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZFiringPermission* FiringPermission;
    
public:
    ASBZCombatManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeAfterCombatStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfHumanAIsRushers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfHumanAIsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfHumanAIsDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfHumanAIsDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfHardPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCombatAreas() const;
    
};


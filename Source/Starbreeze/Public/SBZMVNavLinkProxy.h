#pragma once
#include "CoreMinimal.h"
#include "ClimbTrajectory.h"
#include "ESBZMVNavLinkDirection.h"
#include "SBZProximitySensorNavLinkProxy.h"
#include "Templates/SubclassOf.h"
#include "SBZMVNavLinkProxy.generated.h"

class ASBZCharacter;
class USBZMantlingVaultingSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMVNavLinkProxy : public ASBZProximitySensorNavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMVNavLinkDirection NavLinkDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMantlingVaultingSchematic* VaultingSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMantlingVaultingSchematic* MantlingSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbTrajectory LeftToRightTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbTrajectory RightToLeftTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZCharacter> DefaultCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOnFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownDurationAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCoolDownDurationAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownDurationAfterUseOverride;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> CurrentOccupant;
    
public:
    ASBZMVNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void UseLink();
    
    UFUNCTION(BlueprintCallable)
    bool ReserveLink(ASBZCharacter* Occupant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkFree(ASBZCharacter* Occupant);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownDurationAfterUse() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool FreeLink(ASBZCharacter* Occupant);
    
    UFUNCTION(BlueprintCallable)
    void ForceFreeLink();
    
    UFUNCTION(BlueprintCallable)
    void ComputeTrajectories();
    
};


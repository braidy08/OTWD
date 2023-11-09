#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatRoleChangedDelegateDelegate.h"
#include "ESBZHumanAICharacterTransition.h"
#include "SBZAICharacter.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZHumanAICharacter.generated.h"

class ASBZCharacterFlashlight;
class ASBZHardPoint;
class USBZAIThrowWeapon;
class USBZHumanAIAttributeSet;
class USBZHumanAICharacterAnimation;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZHumanAICharacter : public ASBZAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatRoleChangedDelegate OnCombatRoleChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAIThrowWeapon*> ThrownWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 MigrationFlags;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 HashedSpawnerName;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 HashedAISchematic;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint16 LastSelectedCoverWorldYaw;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 LastAIVelocity2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasCoverSelected: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverTurnOnFlashLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHumanAIAttributeSet* HumanAIAttributeSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHumanAICharacterAnimation* CachedSBZHumanAICharAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacterFlashlight* FlashlightGadget;
    
public:
    ASBZHumanAICharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OrderMoveToLocation(const FVector& Location, float AcceptRadius);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveAlertnessState(FSBZAlertnessLevelIdHelper LeaveLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterAlertnessState(FSBZAlertnessLevelIdHelper EnterLevel);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_TryPlayTransition(ESBZHumanAICharacterTransition Transition, uint16 Dir);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetInCover(bool bEnable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_InterruptCoverPeekMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CoverPeekUpLow(bool bEnable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CoverPeekUp(bool bEnable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CoverPeekRight(bool bEnable, bool bExitingCover);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_CoverPeekLeft(bool bEnable, bool bExitingCover);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZHardPoint* GetHardPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void DisbandFromAssaultGroup();
    
};


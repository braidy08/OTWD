#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/NetSerialization.h"
#include "SBZAlignSlot.h"
#include "SBZAlignTarget.h"
#include "SBZAlignmentSlotFlags.h"
#include "SBZAlignmentSlotOccupationSettings.h"
#include "SBZAlignmentSlotSettings_NetQuantize.h"
#include "SBZAlignmentStateChangeDelegateDelegate.h"
#include "SBZAlignmentTargetSlotAnglesSettings.h"
#include "SBZAlignmentTargetSlotAnglesSettings_NetQuantize.h"
#include "SBZAlignmentTargetSlotCountSettings.h"
#include "SBZAlignmentTargetSlotCountSettings_NetQuantize.h"
#include "SBZAlignmentVisualOrientation.h"
#include "SBZAlignmentManager.generated.h"

class ASBZAlignmentManager;
class ASBZCharacter;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAlignmentManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> AlignmentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> AlignmentSockets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignTarget> TargetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignSlot> IndependentSlotPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignmentVisualOrientation> VisualOrientations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZCharacter*, bool> CapsuleMonitoringPreviousValue;
    
public:
    ASBZAlignmentManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OccupySlotWithCallback(int32 SlotID, FSBZAlignmentSlotOccupationSettings Settings, const FSBZAlignmentStateChangeDelegate& StateChangeCallback);
    
    UFUNCTION(BlueprintCallable)
    void OccupySlot(int32 SlotID, FSBZAlignmentSlotOccupationSettings Settings);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_UpdateTagList(const TArray<FName>& InAlignmentTags);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_UpdateSocketList(const TArray<FName>& InAlignmentSockets);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetupAlignToPoint(uint8 ID, AActor* Actor, FVector_NetQuantize TargetLocation, FRotator TargetRotationEuler, float Duration, uint8 TagIndex, FSBZAlignmentSlotFlags Flags, bool bPending);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ResetTargetSlotSettings(uint8 TargetID, const TArray<FSBZAlignmentSlotSettings_NetQuantize>& Slots, uint8 TagIndex, uint8 StartingCounterID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ResetSlotSettings(uint8 SlotID, const FSBZAlignmentSlotSettings_NetQuantize& Settings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OccupySlot(uint8 SlotID, FSBZAlignmentSlotOccupationSettings Settings, bool bPending);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_InitTargetDataCount(AActor* TargetActor, FVector_NetQuantize Location, FRotator RotationEuler, FSBZAlignmentTargetSlotCountSettings_NetQuantize Settings, uint8 TagIndex, uint8 StartingCounterID, bool bPending);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_InitTargetDataAngles(AActor* TargetActor, FVector_NetQuantize Location, FRotator RotationEuler, FSBZAlignmentTargetSlotAnglesSettings_NetQuantize Settings, uint8 TagIndex, uint8 StartingCounterID, bool bPending);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ClearAlignment(uint8 ID);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasEmptySlot(AActor* TargetActor, AActor* PendingOccupant);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNearestEmptySlot(AActor* TargetActor, FVector QueryPoint, float MaxDistance, AActor* PendingOccupant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZAlignmentManager* GetAlignmentManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateTargetWithSlotCountWithCallback(AActor* TargetActor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FSBZAlignmentTargetSlotCountSettings Settings, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateTargetWithSlotCount(AActor* TargetActor, FSBZAlignmentTargetSlotCountSettings Settings, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateTargetWithSlotAnglesWithCallback(AActor* TargetActor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FSBZAlignmentTargetSlotAnglesSettings Settings, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateTargetWithSlotAngles(AActor* TargetActor, FSBZAlignmentTargetSlotAnglesSettings Settings, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClearTarget(int32 TargetID, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot(int32 SlotID);
    
    UFUNCTION(BlueprintCallable)
    void ClearByID(int32 AlignID);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllByActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CharacterCapsuleSizeChanged(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void CancelAlignToPoint(int32 AlignmentID);
    
    UFUNCTION(BlueprintCallable)
    int32 AlignToPointWithCallback(AActor* Actor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FVector TargetLocation, FRotator TargetRotation, FSBZAlignmentSlotFlags Flags, float Duration, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    int32 AlignToPoint(AActor* Actor, FVector TargetLocation, FRotator TargetRotation, FSBZAlignmentSlotFlags Flags, float Duration, FName Tag);
    
};


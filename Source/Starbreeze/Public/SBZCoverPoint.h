#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESBZAIVisibilityNodeComputationFrequency.h"
#include "ESBZShootingPointType.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZAIvisibilitySerializablePayload.h"
#include "SBZCoverShootingPoints.h"
#include "SBZCoverPoint.generated.h"

class ASBZCoverPoint;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCoverPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCoverPoint>> LinkedCoverPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCoverPoint>> ManualLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BlockingCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIvisibilitySerializablePayload AIVisibilityPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZAIVisibilityLeafNode AIVisibilityNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIVisibilityNodeComputationFrequency AIVisibilityNodeComputationFrequency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkRadius;
    
public:
    ASBZCoverPoint();
    UFUNCTION(BlueprintCallable)
    void SetBlocked(bool bInBlocked);
    
    UFUNCTION(BlueprintCallable)
    bool Reserve(AActor* ForActor);
    
    UFUNCTION(BlueprintCallable)
    bool Occupy(AActor* OccupyingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAiVisibilitySystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingPointInStances(ESBZShootingPointType ShootingPoint, uint8 Stances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReserved(AActor* ForActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFree(AActor* ForActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouchingCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComputed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked(AActor* ForActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShootingPointLOS_Synchronously(ESBZShootingPointType ShootingPoint, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyShootingPointLOS_Synchronously(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetValidShootingPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetReservedForActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOccupant() const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeValidShootingPoints(const TArray<FSBZCoverShootingPoints>& ShootingPoints, float ShootingPointHeightOffset);
    
    UFUNCTION(BlueprintCallable)
    void ComputeAiVisibility();
    
    UFUNCTION(BlueprintCallable)
    void CancelReservation(AActor* ForActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BlockingActorLeft(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void BlockingActorEntered(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Abandon(AActor* OccupyingActor);
    
};


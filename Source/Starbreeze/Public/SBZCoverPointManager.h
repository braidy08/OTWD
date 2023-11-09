#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ESBZCoverPointScoringMode.h"
#include "SBZCoverSearch.h"
#include "SBZCoverShootingPoints.h"
#include "SBZCoverPointManager.generated.h"

class ASBZCoverPoint;
class USBZCoverPointManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCoverPointManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCoverShootingPoints> ShootingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootingPointHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAiVisibilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVisibilityScoreToBeSafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCoverPointScoringMode ScoringMode;
    
public:
    USBZCoverPointManager();
    UFUNCTION(BlueprintCallable)
    ASBZCoverPoint* K2GetBestCoverPointWithFSearch(UPARAM(Ref) FBoxSphereBounds& Bounds, ASBZCoverPoint* CurCoverPoint, const FSBZCoverSearch& CoverSearch, const TArray<ASBZCoverPoint*> RejectedCoverPoints);
    
    UFUNCTION(BlueprintCallable)
    ASBZCoverPoint* K2GetBestCoverPoint(UPARAM(Ref) FBoxSphereBounds& Bounds, ASBZCoverPoint* CurCoverPoint, FVector PlayerPos, FVector EnemyPos, float MinDistFromEnemy, float PreferredDistFromEnemy, float PreferredDistFromPlayer, float MaxShootingAngle, float MaxEnemyCoverageAngle, uint8 AngleSearchBitMask, uint8 DistSearchBitMask, const TArray<ASBZCoverPoint*> RejectedCoverPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAiVisibilitySystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZCoverPointManager* GetCoverPointManagerFromWorld(UWorld* WorldObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCoverPointManager* GetCoverPointManager(UObject* WorldContextObject);
    
};


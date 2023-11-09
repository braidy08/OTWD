#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZGrappleAlignmentPullDownSettings.h"
#include "LurkerZombieData.h"
#include "OTWDAISchematic.h"
#include "ZombieDefaultBehaviourData.h"
#include "ZombieLungeData.h"
#include "ZombieStumbleData.h"
#include "ZombieTryReachingData.h"
#include "AISchematicZombie.generated.h"

class UObject;
class UStaticMesh;

UCLASS(Blueprintable)
class OTWD_API UAISchematicZombie : public UOTWDAISchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieLungeData LungeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLurkerZombieData LurkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieStumbleData StumbleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieDefaultBehaviourData BehaviourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> WoundReferenceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeEatingCorpse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeEatingCorpse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleDistanceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> GrappleDistance2dDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> GrappleDistanceHeightDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleAlignmentPullDownSettings GrapplePulldownSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieTryReachingData TryReachingData;
    
    UAISchematicZombie();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetGrappleDistanceHeight(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    float GetGrappleDistance2D(const UObject* WorldContextObject);
    
};


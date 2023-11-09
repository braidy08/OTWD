#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDefaultBehaviour.h"
#include "OTWDAIController.h"
#include "ZombieAIController.generated.h"

class ASBZCharacter;
class AZombieCharacter;
class UBehaviorTree;

UCLASS(Blueprintable)
class OTWD_API AZombieAIController : public AOTWDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HomeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLurker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCrowdZombie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCrawler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BTNormalAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BTCrowdAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZombieCharacter* ZombieCharacter;
    
public:
    AZombieAIController();
    UFUNCTION(BlueprintCallable)
    bool TryLungeDefaultSettings(ASBZCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool TryLunge(ASBZCharacter* TargetCharacter, float MaxDistance, float MaxAngle, float ShoveForce, float ShoveRecoveryTime, float TargetVelocityWeight, float SelfShoveForce, float SelfRecoveryTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAwarness();
    
    UFUNCTION(BlueprintCallable)
    void RestartAwarness();
    
    UFUNCTION(BlueprintCallable)
    EDefaultBehaviour RandomizeDefaultBehaviour();
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultBehaviourWaitTime();
    
};


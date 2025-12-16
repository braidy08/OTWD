#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZBaseGearActor.h"
#include "SBZCosmeticGearActor.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZCosmeticGearActor : public ASBZBaseGearActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    ASBZCosmeticGearActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentReplication();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBoneHit(const FHitResult& HitResult);
    
};


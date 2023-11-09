#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZDifficulty.h"
#include "ESBZTankStaggerState.h"
#include "SBZAITankComponent.h"
#include "SBZAIHumanTankComponent.generated.h"

class ASBZCharacter;
class USBZHurtReaction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIHumanTankComponent : public USBZAITankComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LegBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle StaggerTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> DamageUntilStaggerByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadshotMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDamageUntilStagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* LowHurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* MidHurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* HighHurtReaction;
    
public:
    USBZAIHumanTankComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStaggerExit();
    
    UFUNCTION(BlueprintCallable)
    void OnStaggerEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetStaggerState(ESBZTankStaggerState NewStaggerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredDamageUntilStagger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDamageUntilStagger() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStealthMeterComponent.h"
#include "SBZStealthMeterFaction.h"
#include "OTWDPlayerStealthMeterComponent.generated.h"

class AActor;
class ASBZAICharacter;
class ASBZPlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDPlayerStealthMeterComponent : public USBZPlayerStealthMeterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStealthMeterFaction> FactionsOutOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxImmediateThreatMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewFovBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSniperThreatMarkers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ASBZAICharacter*> ImmediateThreats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SniperThreats;
    
public:
    UOTWDPlayerStealthMeterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSniperThreats(TArray<AActor*>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSniperThreatMarkersSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxImmediateThreatMarkersSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetImmediateThreats(TArray<ASBZAICharacter*>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurSizeOfSniperThreats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurSizeOfImmediateThreats() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopBeingAimedAt(AActor* Enemy, ASBZPlayerCharacter* Target);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartBeingAimedAt(AActor* Enemy, ASBZPlayerCharacter* Target, float TimeToShot);
    
};


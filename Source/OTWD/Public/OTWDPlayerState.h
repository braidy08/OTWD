#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerState.h"
#include "OTWDCollectedGameStatistics.h"
#include "OTWDPlayerState.generated.h"

class AOTWDHordeRelocator;

UCLASS(Blueprintable)
class OTWD_API AOTWDPlayerState : public ASBZPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 LevelIdx;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 PowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRescueWanderer;
    
    AOTWDPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void SendHordeRelocatorVisible(AOTWDHordeRelocator* SeenThis);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SendOTWDGameStatistics(const FOTWDCollectedGameStatistics& OTWDGameStatistics);
    
};


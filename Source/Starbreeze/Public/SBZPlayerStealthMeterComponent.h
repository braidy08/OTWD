#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZStealthMeterData.h"
#include "SBZStealthMeterFaction.h"
#include "SBZPlayerStealthMeterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerStealthMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAlertMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInStealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZStealthMeterFaction> Factions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZStealthMeterData> AlertnessList;
    
public:
    USBZPlayerStealthMeterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMarkersSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZStealthMeterData GetHighestAlertness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurSizeOfAlertnessList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAlertnessList(TArray<FSBZStealthMeterData>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZStealthMeterData GetAlertnessByIndex(int32 nIndex) const;
    
};


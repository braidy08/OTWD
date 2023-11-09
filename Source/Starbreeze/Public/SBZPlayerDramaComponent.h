#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DramaEventData.h"
#include "EDramaEvent.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPlayerDramaComponent.generated.h"

class AActor;
class AController;
class APlayerController;
class ASBZPlayerController;
class UDamageType;
class UObject;
class USBZPlayerDramaComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerDramaComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighDramaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowDramaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DramaDropCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DramaCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDramaEvent, FDramaEventData> DramaEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* OwnerPlayerController;
    
public:
    USBZPlayerDramaComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCalm() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseDramaByEvent(EDramaEvent Event, float Magnitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseDrama(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDramaPeaked() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APlayerController*> GetIntensitySortedPlayerControllers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float GetIntensity(const AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static USBZPlayerDramaComponent* GetDramaComponent(const AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDrama() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetAveragePlayerIntensity(const UObject* WorldContextObject);
    
};


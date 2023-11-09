#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "Engine/EngineTypes.h"
#include "SBZWeaponConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacterPedestal.generated.h"

class APawn;
class ASBZPlayerCharacter;
class ASBZPlayerState;
class USBZCosmetic;
class USBZPedestalCharacterWeaponAnimationCollection;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCharacterPedestal : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSpawnedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterStreamingDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayedWeaponSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLobbyCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateBeaconInfoTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle HackUpdateReadyStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPedestalCharacterWeaponAnimationCollection* CharacterWeaponAnimationCollection;
    
public:
    ASBZCharacterPedestal();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateLocalPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFromBeaconState();
    
    UFUNCTION(BlueprintCallable)
    void SetReady(bool bInIsReady);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacterWeapons(const TArray<FSBZWeaponConfiguration>& NewWeaponSlotConfigurations);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacterCosmetics(const TArray<USBZCosmetic*>& NewCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacter(const TSubclassOf<APawn> NewPawnClass);
    
    UFUNCTION(BlueprintCallable)
    void HandleSubsystemsInitialsed();
    
    UFUNCTION(BlueprintCallable)
    void HackUpdateReadyState();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};


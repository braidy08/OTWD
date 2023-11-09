#pragma once
#include "CoreMinimal.h"
#include "SBZProfileInfo.h"
#include "SBZWeaponConfiguration.h"
#include "AsyncChangeLoadoutPayload.generated.h"

class APawn;
class ASBZWeapon;
class UGameplayAbility;
class USBZCosmetic;
class USBZTech;

USTRUCT(BlueprintType)
struct FAsyncChangeLoadoutPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> LoadedPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfiguration> StubWeaponConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASBZWeapon>> LoadedWeaponClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UGameplayAbility>> LoadedAbilityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZTech>> LoadedTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZCosmetic>> LoadedCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProfileInfo ProfileInfo;
    
    STARBREEZE_API FAsyncChangeLoadoutPayload();
};


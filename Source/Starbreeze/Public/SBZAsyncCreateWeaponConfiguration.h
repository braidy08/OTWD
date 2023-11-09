#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCreateWeaponConfigurationPayload.h"
#include "SBZWeaponConfiguration.h"
#include "SBZAsyncCreateWeaponConfiguration.generated.h"

class ASBZWeapon;
class USBZAsyncCreateWeaponConfiguration;
class USBZProfileSaveData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAsyncCreateWeaponConfiguration : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponConfigurationSignature, FSBZWeaponConfiguration, Configuration);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponConfigurationSignature Completed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZWeapon> CachedWeaponClassAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponConfiguration CachedStubWeaponConfiguration;
    
public:
    USBZAsyncCreateWeaponConfiguration();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishAsyncLoading(FAsyncCreateWeaponConfigurationPayload Payload);
    
public:
    UFUNCTION(BlueprintCallable)
    static USBZAsyncCreateWeaponConfiguration* AsyncCreateWeaponConfigurationFromWeaponSavedData(const USBZProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    static USBZAsyncCreateWeaponConfiguration* AsyncCreateWeaponConfiguration(const TSoftClassPtr<ASBZWeapon>& WeaponClassAsset, const FSBZWeaponConfiguration& StubWeaponConfiguration);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZLookInputSettings.h"
#include "SBZPlayerSettings.generated.h"

class APawn;
class USBZCharacterSchematic;
class USBZCharactersSchematic;
class USBZWeaponDataCollection;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZPlayerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLookInputSettings LookInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZCharactersSchematic> CharacterCollectionSchematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponDataCollection> GlobalWeaponDataCollection;
    
public:
    USBZPlayerSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidPlayerPawnClass(TSoftClassPtr<APawn> PawnClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSoftClassPtr<APawn>> GetPlayerPawnClasses();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZWeaponDataCollection* GetGlobalWeaponDataCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZCharacterSchematic* GetDefaultCharacterSchematic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZCharacterSchematic* GetCharacterSchematic(TSoftClassPtr<APawn> InPawnClass);
    
};


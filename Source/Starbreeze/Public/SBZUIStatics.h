#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZWidgetZOrdering.h"
#include "SBZSchematicNetworkReference.h"
#include "SBZUIStatics.generated.h"

class ASBZPlayerCharacter;
class ASBZPlayerState;
class ULocalPlayer;
class UObject;
class USBZCharacterSchematic;
class USBZCharacterSkin;
class USBZLevelSchematic;
class USBZWeaponSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZUIStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowLevelTutorial(const UObject* WorldContextObject, FName TutorialName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZLevelSchematic* SchematicNetworkToLevel(const UObject* WorldContextObject, const FSBZSchematicNetworkReference& NetworkSchematic);
    
    UFUNCTION(BlueprintCallable)
    static void LogUiVerbose(const FString& LogText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadoutSetWeaponSecondary(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponSecondary);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadoutSetWeaponPrimary(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponPrimary);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadoutSetWeaponMelee(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponMelee);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadoutSetCharacterSkin(const UObject* WorldContextObject, USBZCharacterSkin* CharacterSkin);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadoutSetCharacter(const UObject* WorldContextObject, USBZCharacterSchematic* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadingScreenActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideLevelTutorial(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWidgetZOrderValue(ESBZWidgetZOrdering ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerState* GetStateForLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULocalPlayer* GetLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText FloatToText(float FloatToConvert, int32 Integral, int32 Precision);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerState* FindStateForPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerCharacter* FindCharacterForPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex);
    
};


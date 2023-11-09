#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SBZUnlockablesFunctionLibrary.generated.h"

class APlayerController;
class UObject;
class USBZUnlockable;
class USBZUnlockableMetadata;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUnlockablesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZUnlockablesFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UpdatePurchasedContentPacks(const UObject* WorldContextObject, TArray<USBZUnlockableMetadata*>& OutUnlocked);
    
    UFUNCTION(BlueprintCallable)
    static bool MeetsTechRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& AcquiredTechs, TArray<USBZUnlockableMetadata*>& MissingRequiredTechs);
    
    UFUNCTION(BlueprintCallable)
    static bool MeetsQuestRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& CompletedQuests, TArray<USBZUnlockableMetadata*>& MissingRequiredQuests);
    
    UFUNCTION(BlueprintCallable)
    static bool MeetsLevelGroupRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& OpenedLevelGroups, TArray<USBZUnlockableMetadata*>& MissingRequiredLevelGroups);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool MeetsContentPackRequirement(const UObject* WorldContextObject, const USBZUnlockableMetadata* UnlockableMetadata, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool MeetsAllRequirements(const UObject* WorldContextObject, const USBZUnlockableMetadata* UnlockableMetadata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSoftObjectPtr<USBZUnlockable>> FindUnlockablesWithClass(const TArray<USBZUnlockableMetadata*>& UnlockableMetadataObjects, TSubclassOf<USBZUnlockable> UnlockableClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<USBZUnlockableMetadata*> FilterUnlocked(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& UnlockableMetadataObjects);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddOpenedLevelGroups(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewLevelGroups, TArray<USBZUnlockableMetadata*>& OutUnlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddCompletedQuests(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewCompletedQuests, TArray<USBZUnlockableMetadata*>& OutUnlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddAcquiredTechs(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewTechs, TArray<USBZUnlockableMetadata*>& OutUnlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddAcquiredPawnTechs(const UObject* WorldContextObject, const FGuid& PawnSavedDataGuid, const TArray<USBZUnlockableMetadata*>& NewTechs, TArray<USBZUnlockableMetadata*>& OutUnlocked);
    
};


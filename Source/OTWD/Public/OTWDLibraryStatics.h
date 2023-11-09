#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OTWDLibraryStatics.generated.h"

class UOTWDLibraryItemData;
class UObject;

UCLASS(Blueprintable)
class OTWD_API UOTWDLibraryStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDLibraryStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockLibraryItem(const UObject* WorldContextObject, UOTWDLibraryItemData* ItemToUnlock);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkLibraryItemsAsRead(const UObject* WorldContextObject, UOTWDLibraryItemData* NewlyReadLibraryItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLibraryItemUnread(const UObject* WorldContextObject, UOTWDLibraryItemData* LibraryDataItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLibraryItemUnlocked(const UObject* WorldContextObject, UOTWDLibraryItemData* LibraryDataItem);
    
    UFUNCTION(BlueprintCallable)
    static float GetChunkInstallProgress(int32 ChunkId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoUnreadLibraryItemsExist(const UObject* WorldContextObject);
    
};


#pragma once
#include "CoreMinimal.h"
#include "OnUnlockedLibraryItemDelegate.generated.h"

class AOTWDPlayerController;
class UOTWDLibraryItemData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnlockedLibraryItem, AOTWDPlayerController*, PlayerController, UOTWDLibraryItemData*, LibraryItemData);


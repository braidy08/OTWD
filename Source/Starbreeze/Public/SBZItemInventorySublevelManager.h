#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZPuzzleItemZone.h"
#include "SBZItemInventorySublevelManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZItemInventorySublevelManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPuzzleItemZone> PuzzleItemZones;
    
    ASBZItemInventorySublevelManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateZone(const FString& ZoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddSelectionToZone();
    
};


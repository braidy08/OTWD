#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDLibrarySeasonData.h"
#include "OTWDLibraryData.generated.h"

class UOTWDLibraryItemData;

UCLASS(Blueprintable)
class OTWD_API UOTWDLibraryData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDLibraryItemData* RootSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeasonOrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FOTWDLibrarySeasonData> SeasonDataMap;
    
    UOTWDLibraryData();
};


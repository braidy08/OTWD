#pragma once
#include "CoreMinimal.h"
#include "SBZPuzzleItemZone.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPuzzleItemZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PuzzleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivated;
    
    FSBZPuzzleItemZone();
};


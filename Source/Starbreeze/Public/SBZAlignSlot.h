#pragma once
#include "CoreMinimal.h"
#include "SBZAlignSlotOccupantCachedLocation.h"
#include "SBZAlignSlot.generated.h"

class AActor;
class AController;
class ASBZAlignmentManager;

USTRUCT(BlueprintType)
struct FSBZAlignSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAlignmentManager* OwningManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ReservationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Occupant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* OccupantController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignSlotOccupantCachedLocation> CachedPositions;
    
    STARBREEZE_API FSBZAlignSlot();
};


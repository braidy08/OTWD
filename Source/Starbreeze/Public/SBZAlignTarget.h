#pragma once
#include "CoreMinimal.h"
#include "SBZAlignSlot.h"
#include "SBZAlignTarget.generated.h"

class AActor;
class ASBZAlignmentManager;

USTRUCT(BlueprintType)
struct FSBZAlignTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAlignmentManager* OwningManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAlignSlot> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FloorActor;
    
    STARBREEZE_API FSBZAlignTarget();
};


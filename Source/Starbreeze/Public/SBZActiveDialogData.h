#pragma once
#include "CoreMinimal.h"
#include "SBZActiveDialogData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZActiveDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Performers;
    
    FSBZActiveDialogData();
};


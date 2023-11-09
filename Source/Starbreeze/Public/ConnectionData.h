#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPathConnectionState.h"
#include "EPathTimeEstimate.h"
#include "ConnectionData.generated.h"

class APathNode;

USTRUCT(BlueprintType)
struct STARBREEZE_API FConnectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathNode* Neighbor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathTimeEstimate TraversalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Handles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPathConnectionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Direction;
    
    FConnectionData();
};


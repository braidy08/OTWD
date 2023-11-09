#pragma once
#include "CoreMinimal.h"
#include "SBZLadderPart.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZLadderPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    FSBZLadderPart();
};


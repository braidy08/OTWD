#pragma once
#include "CoreMinimal.h"
#include "SBZModularAttachmentComponents.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSBZModularAttachmentComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> Components;
    
    STARBREEZE_API FSBZModularAttachmentComponents();
};


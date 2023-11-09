#pragma once
#include "CoreMinimal.h"
#include "SBZAISpawner.h"
#include "OTWDAISpawner.generated.h"

UCLASS(Abstract, Blueprintable)
class OTWD_API AOTWDAISpawner : public ASBZAISpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddZombiesToHorde;
    
    AOTWDAISpawner();
};


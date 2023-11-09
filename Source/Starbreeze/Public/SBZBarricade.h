#pragma once
#include "CoreMinimal.h"
#include "SBZBarricadePlank.h"
#include "SBZBarricade.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZBarricade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBarricadePlank> BarricadePlanks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitPlankHealth;
    
public:
    FSBZBarricade();
};


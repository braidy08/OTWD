#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionDirection.h"
#include "SBZHurtReactionBody.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZHurtReactionBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionDirection LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionDirection UpperBody;
    
    FSBZHurtReactionBody();
};


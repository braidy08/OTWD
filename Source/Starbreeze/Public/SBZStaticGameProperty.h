#pragma once
#include "CoreMinimal.h"
#include "MutableFloat.h"
#include "SBZStaticGameProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBZStaticGameProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMutableFloat StaticValue;
    
public:
    STARBREEZE_API FSBZStaticGameProperty();
};


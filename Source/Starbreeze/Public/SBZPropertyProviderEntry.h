#pragma once
#include "CoreMinimal.h"
#include "SBZPropertyProviderEntry.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPropertyProviderEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* ReferencedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    FSBZPropertyProviderEntry();
};


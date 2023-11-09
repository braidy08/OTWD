#pragma once
#include "CoreMinimal.h"
#include "SBZPropertyProviderEntry.h"
#include "SBZPropertyProvider.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPropertyProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPropertyProviderEntry> PathEntries;
    
    FSBZPropertyProvider();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOTWDVaultIdentifierType.h"
#include "OTWDVaultIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FOTWDVaultIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDVaultIdentifierType IdentifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    OTWD_API FOTWDVaultIdentifier();
};


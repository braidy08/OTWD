#pragma once
#include "CoreMinimal.h"
#include "SBZSchematicNetworkReference.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSchematicNetworkReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SchematicIndex;
    
public:
    FSBZSchematicNetworkReference();
};


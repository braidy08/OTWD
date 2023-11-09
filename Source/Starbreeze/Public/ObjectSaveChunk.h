#pragma once
#include "CoreMinimal.h"
#include "ObjectSaveChunk.generated.h"

USTRUCT(BlueprintType)
struct FObjectSaveChunk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SaveDataObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* OriginalObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Payload;
    
    STARBREEZE_API FObjectSaveChunk();
};


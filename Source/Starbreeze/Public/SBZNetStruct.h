#pragma once
#include "CoreMinimal.h"
#include "SBZNetStruct.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZNetStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ScriptStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirtyMarker;
    
public:
    FSBZNetStruct();
};


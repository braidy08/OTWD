#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDMetagameMissionMoraleModifier.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameMissionMoraleModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoraleLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    OTWD_API FOTWDMetagameMissionMoraleModifier();
};


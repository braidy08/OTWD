#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerUIData.generated.h"

class APawn;
class UTexture2D;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> PlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PassiveIcon;
    
    FSBZPlayerUIData();
};


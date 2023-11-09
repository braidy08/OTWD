#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESurvivorClassType.h"
#include "OTWDMetagameSurvivorClassDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Const)
class UOTWDMetagameSurvivorClassDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivorClassType ClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UOTWDMetagameSurvivorClassDataAsset();
};


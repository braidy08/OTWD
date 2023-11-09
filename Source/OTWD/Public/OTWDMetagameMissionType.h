#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDMetagameMissionType.generated.h"

class UOTWDMetagameSurvivorClassDataAsset;

UCLASS(Blueprintable)
class UOTWDMetagameMissionType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorClassDataAsset*> PreferredClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusForPreferredClassPresent;
    
    UOTWDMetagameMissionType();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDWeaponStashCollection.generated.h"

class UOTWDWeaponStashAsset;

UCLASS(Blueprintable)
class OTWD_API UOTWDWeaponStashCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDWeaponStashAsset*> Collection;
    
    UOTWDWeaponStashCollection();

};


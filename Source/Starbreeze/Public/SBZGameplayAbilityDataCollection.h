#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayAbilityDataCollection.generated.h"

class UGameplayAbility;
class USBZGameplayAbilityData;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZGameplayAbilityDataCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGameplayAbilityData*> Collection;
    
    USBZGameplayAbilityDataCollection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameplayAbilityData* FindDataForGameplayAbility(TSubclassOf<UGameplayAbility> GameplayAbilityClass) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectGameplayAbilityData() const;
    
};


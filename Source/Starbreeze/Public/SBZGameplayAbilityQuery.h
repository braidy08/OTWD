#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZCompositeGameplayAbilityQuery.h"
#include "SBZGameplayAttributeComparison.h"
#include "SBZGameplayEffectComparison.h"
#include "SBZGameplayTagComparison.h"
#include "SBZGameplayTagContainerComparison.h"
#include "SBZGameplayAbilityQuery.generated.h"

UCLASS(Blueprintable, Const, MinimalAPI)
class USBZGameplayAbilityQuery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayAttributeComparison> AttributesQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayEffectComparison> EffectsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagComparison> TagCountsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagContainerComparison> TagContainersQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCompositeGameplayAbilityQuery CompositeQuery;
    
    USBZGameplayAbilityQuery();
};


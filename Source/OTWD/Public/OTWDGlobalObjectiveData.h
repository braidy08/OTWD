#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDGlobalObjectiveData.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDGlobalObjectiveData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UOTWDGlobalObjectiveData();
};


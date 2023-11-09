#pragma once
#include "CoreMinimal.h"
#include "SBZBackendData.h"
#include "SBZPlayFabBackendData.generated.h"

USTRUCT(BlueprintType)
struct SBZANALYTICS_API FSBZPlayFabBackendData : public FSBZBackendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PlayerReadOnlyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> TitleData;
    
    FSBZPlayFabBackendData();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HoudiniTool.generated.h"

class UHoudiniAsset;

USTRUCT(BlueprintType)
struct FHoudiniTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath IconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHoudiniAsset> HoudiniAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HelpURL;
    
    HOUDINIENGINERUNTIME_API FHoudiniTool();
};


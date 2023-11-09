#pragma once
#include "CoreMinimal.h"
#include "WBPLoadedParams.generated.h"

class UObject;
class UUserWidget;

USTRUCT(BlueprintType)
struct FWBPLoadedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> WBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> WBPObject;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> RequestingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName WidgetName;
    
    OTWD_API FWBPLoadedParams();
};


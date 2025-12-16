#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SBZSignificanceManager.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class SBZSIGNIFICANCEMANAGER_API USBZSignificanceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath StarbreezeSignificanceManagerClassName;
    
public:
    USBZSignificanceManager();

};


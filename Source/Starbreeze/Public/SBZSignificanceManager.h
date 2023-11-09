#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "SBZSignificanceManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, NoClear, meta=(AllowPrivateAccess=true))
    uint8 ManageParticleSystemSignificance: 1;
    
public:
    USBZSignificanceManager();
};


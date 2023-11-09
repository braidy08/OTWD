#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAchievement.generated.h"

class USBZGameInstance;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAchievement : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* GameInstance;
    
public:
    USBZAchievement();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZDoorActionRestrictions.h"
#include "SBZDoorActionRestrictionsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorActionRestrictionsSchematic : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDoorActionRestrictions> ActionRestrictions;
    
public:
    USBZDoorActionRestrictionsSchematic();
};


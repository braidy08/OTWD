#pragma once
#include "CoreMinimal.h"
#include "Engine/PrimaryAssetLabel.h"
#include "OTWDPrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDPrimaryAssetLabel : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NeededForGamePart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NeededByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlatformRestriction;
    
    UOTWDPrimaryAssetLabel();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryAssetLabel -FallbackName=PrimaryAssetLabel
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


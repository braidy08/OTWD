#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "SBZGearAttachmentType.h"
#include "SBZGearAttachment.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZGearAttachment : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZGearAttachmentType> BoneMap;
    
    USBZGearAttachment();

};


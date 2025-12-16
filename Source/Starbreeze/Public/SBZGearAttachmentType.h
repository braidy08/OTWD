#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZGearAttachmentType.generated.h"

class ASBZArmorPart;
class ASBZCosmeticGearActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGearAttachmentType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorChanceByDifficulty[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZArmorPart>> ArmorGearActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZCosmeticGearActor>> CosmeticGearActorClasses;
    
    FSBZGearAttachmentType();
};


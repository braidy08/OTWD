#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeDamagePattern.h"
#include "SBZHeadshotBoxDamagePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHeadshotBoxDamagePattern : public USBZMeleeDamagePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxRotationAngle;
    
public:
    USBZHeadshotBoxDamagePattern();
};


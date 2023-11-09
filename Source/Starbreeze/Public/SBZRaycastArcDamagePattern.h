#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeDamagePattern.h"
#include "SBZRaycastArcDamagePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZRaycastArcDamagePattern : public USBZMeleeDamagePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcStartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcEndAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaycastCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleHitsPerActor;
    
public:
    USBZRaycastArcDamagePattern();
};


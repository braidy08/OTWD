#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "AttributeSet.h"
#include "SBZFactionIdHelper.h"
#include "SBZSchematic.h"
#include "SBZNoiseSchematic.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZNoiseSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeOfNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute NoiseRangeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute NoiseIntensityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve IntensitybyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCooldownIgnored;
    
    USBZNoiseSchematic();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void OnNoiseGenerated(const UObject* WorldContextObject, float Multiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRangeOfNoise() const;
    
};


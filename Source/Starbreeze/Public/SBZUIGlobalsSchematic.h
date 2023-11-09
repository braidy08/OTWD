#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAbilityUIData.h"
#include "SBZGameplayAttributeUIData.h"
#include "SBZGameplayEffectUIData.h"
#include "SBZGameplayTagUIData.h"
#include "SBZPlayerUIData.h"
#include "SBZSchematic.h"
#include "SBZUIFont.h"
#include "SBZUIGlobalsSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIGlobalsSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> ColorsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZUIFont> FontsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayAttributeUIData> GameplayAttributesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayTagUIData> GameplayTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayEffectUIData> GameplayEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityUIData> AbilityArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerUIData> PlayerArray;
    
    USBZUIGlobalsSchematic();
};


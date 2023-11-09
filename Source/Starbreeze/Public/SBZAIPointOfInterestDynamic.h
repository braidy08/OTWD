#pragma once
#include "CoreMinimal.h"
#include "OnPOIAlertedDelegate.h"
#include "SBZAIPointOfInterest.h"
#include "SBZAIPointOfInterestDynamic.generated.h"

class AActor;
class ASBZAICharacter;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAIPointOfInterestDynamic : public ASBZAIPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPOIAlerted OnPOIAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireVisualPerceptionOnAlert;
    
    ASBZAIPointOfInterestDynamic();
    UFUNCTION(BlueprintCallable)
    void Recruit(TArray<ASBZAICharacter*>& Characters);
    
};


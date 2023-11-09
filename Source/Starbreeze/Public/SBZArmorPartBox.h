#pragma once
#include "CoreMinimal.h"
#include "SBZArmorPart.h"
#include "SBZArmorPartBox.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZArmorPartBox : public ASBZArmorPart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
public:
    ASBZArmorPartBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetBox() const;
    
};


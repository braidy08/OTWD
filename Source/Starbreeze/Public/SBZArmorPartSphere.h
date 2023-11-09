#pragma once
#include "CoreMinimal.h"
#include "SBZArmorPart.h"
#include "SBZArmorPartSphere.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZArmorPartSphere : public ASBZArmorPart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
public:
    ASBZArmorPartSphere();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetSphere() const;
    
};


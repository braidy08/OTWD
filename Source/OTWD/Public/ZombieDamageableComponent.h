#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=DamageableComponent -FallbackName=DamageableComponent
#include "ZombieDamageableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UZombieDamageableComponent : public UDamageableComponent {
    GENERATED_BODY()
public:
    UZombieDamageableComponent(const FObjectInitializer& ObjectInitializer);

};


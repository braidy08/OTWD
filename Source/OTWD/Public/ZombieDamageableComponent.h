#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/DamageableComponent.h"
#include "ZombieDamageableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UZombieDamageableComponent : public UDamageableComponent {
    GENERATED_BODY()
public:
    UZombieDamageableComponent(const FObjectInitializer& ObjectInitializer);

};


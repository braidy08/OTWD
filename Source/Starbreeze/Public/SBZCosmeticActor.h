#pragma once
#include "CoreMinimal.h"
#include "SBZCosmetic.h"
#include "Templates/SubclassOf.h"
#include "SBZCosmeticActor.generated.h"

class AActor;
class USBZCosmeticActor;
class USBZUnlockableMetadata;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZCosmeticActor : public USBZCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    USBZCosmeticActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<USBZCosmeticActor> GetUnlockableAsCosmeticActor(const USBZUnlockableMetadata* UnlockableMetadata);
    
};


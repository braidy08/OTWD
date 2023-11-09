#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZThrowable.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZThrowable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    ASBZThrowable();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Throw(const FVector& Direction, float Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnThrow();
    
};


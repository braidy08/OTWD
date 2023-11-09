#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAreaRepresentation.generated.h"

class ASBZAreaRepresentation;
class AVolume;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAreaRepresentation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    ASBZAreaRepresentation();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASBZAreaRepresentation*> GetAreaRepresentationList(UObject* WorldContextObject);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OTWDBloodAndGrungeVariation.h"
#include "OTWDExtraPartVariation.h"
#include "OTWDZoneVariation.h"
#include "OTWDCosmeticCharacterVariation.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class AOTWDCosmeticCharacterVariation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDBloodAndGrungeVariation> BloodAndGrungeVariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDExtraPartVariation> ExtraPartVariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDZoneVariation> Zone1VariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDZoneVariation> Zone2VariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDZoneVariation> Zone3VariationArray;
    
public:
    AOTWDCosmeticCharacterVariation();
};


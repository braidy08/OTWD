#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZMaterialReplacementDefinition.h"
#include "SBZMaterialReplacements.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMaterialReplacements : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMaterialReplacementDefinition> DirectReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CopiedScalarParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CopiedVectorParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CopiedTextureParameterNames;
    
    USBZMaterialReplacements();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* FindReplacement(const UMaterialInterface* MaterialInterface) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* CreateDynamicMaterial(const UMaterialInterface* ExistingMaterial, UObject* Owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyToMeshComponent(UMeshComponent* MeshComponent) const;
    
};


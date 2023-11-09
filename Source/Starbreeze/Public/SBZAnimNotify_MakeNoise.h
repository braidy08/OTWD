#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAISoundType.h"
#include "SBZAnimNotify_MakeNoise.generated.h"

class ASBZCharacter;
class UObject;
class USBZNoiseSchematic;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZAnimNotify_MakeNoise : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* NoiseSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISoundType NoiseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
public:
    USBZAnimNotify_MakeNoise();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    void MakeNoise(ASBZCharacter* InCharacter, USkeletalMeshComponent* InMesh, UObject* InWorldContextObject) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterMeshSkin.h"
#include "SBZCosmetic.h"
#include "SBZCharacterSkin.generated.h"

class USBZCharacterSkin;
class USBZUnlockableMetadata;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCharacterSkin : public USBZCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterMeshSkin FirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterMeshSkin FirstPersonLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterMeshSkin ThirdPerson;
    
    USBZCharacterSkin();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<USBZCharacterSkin> GetUnlockableAsCharacterSkin(const USBZUnlockableMetadata* UnlockableMetadata);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyPreview(USkeletalMeshComponent* SkeletalMeshComponent) const;
    
};


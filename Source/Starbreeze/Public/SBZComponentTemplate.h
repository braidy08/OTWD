#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZComponentTemplate.generated.h"

class AActor;
class UActorComponent;
class USBZComponentTemplate;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZComponentTemplate : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* Template;
    
public:
    USBZComponentTemplate();
    UFUNCTION(BlueprintCallable)
    static UActorComponent* SpawnComponentFromTemplate(USBZComponentTemplate* ComponentTemplate, AActor* Owner, USceneComponent* AttachParent, FName AttachBone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetTemplate() const;
    
};


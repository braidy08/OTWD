#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZDemoModeConfiguration.generated.h"

class USBZContentPack;
class USBZProfileSaveData;

UCLASS(Blueprintable, Const)
class USBZDemoModeConfiguration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZProfileSaveData* DemoProfileSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZContentPack*> DemoContentPacks;
    
    USBZDemoModeConfiguration();
    UFUNCTION(BlueprintCallable)
    void Validate() const;
    
};


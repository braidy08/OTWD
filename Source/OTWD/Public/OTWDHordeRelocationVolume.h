#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "EHordeRelocationType.h"
#include "OTWDHordeRelocationVolume.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDHordeRelocationVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeRelocationType RelocationType;
    
    AOTWDHordeRelocationVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlockHordeRelocation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AllowHordeRelocation();
    
};


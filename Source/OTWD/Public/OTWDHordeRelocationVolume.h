#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EHordeRelocationType.h"
#include "OTWDHordeRelocationVolume.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDHordeRelocationVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeRelocationType RelocationType;
    
    AOTWDHordeRelocationVolume();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlockHordeRelocation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AllowHordeRelocation();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZAIFactionHideZone -FallbackName=SBZAIFactionHideZone
#include "OTWDAIFactionHideZone.generated.h"

class AActor;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDAIFactionHideZone : public ASBZAIFactionHideZone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ItemsInZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> IgnoreZones;
    
public:
    AOTWDAIFactionHideZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};


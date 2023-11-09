#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBZFactionIdHelper.h"
#include "SBZAIFactionHideZone.generated.h"

class ASBZCharacter;
class UBoxComponent;
class UPrimitiveComponent;
class USBZFactionIgnoreBoxComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIFactionHideZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZFactionIgnoreBoxComponent* SBZFactionSafeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFactionIdHelper> HiddenFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartsEnabled;
    
    ASBZAIFactionHideZone();
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateZones();
    
    UFUNCTION(BlueprintCallable)
    void CheckCharacter(ASBZCharacter* Character, const FGenericTeamId& TeamID);
    
    UFUNCTION(BlueprintCallable)
    void ActivateZones();
    
};


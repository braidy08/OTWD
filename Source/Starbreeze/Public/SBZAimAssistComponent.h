#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBZAimAssistResult.h"
#include "SBZTargetCandidate.h"
#include "SBZAimAssistComponent.generated.h"

class ASBZAICharacter;
class ASBZPlayerCharacter;
class ASBZPlayerController;
class ASBZWeapon;
class USBZAimAssistsSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* CurTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* CurPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* CurPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeapon* CurWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAimAssistsSchematic* CurSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTargetCandidate> BulletMagnetismCandidates;
    
public:
    USBZAimAssistComponent();
    UFUNCTION(BlueprintCallable)
    FSBZAimAssistResult TickAimAssist(float DeltaTime, bool bHandlePlayerRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetDebug(bool _bDebug);
    
    UFUNCTION(BlueprintCallable)
    bool GetBulletDeviation(FVector Start, FVector Direction, float MaxDistance, FVector& DeviationPoint);
    
};


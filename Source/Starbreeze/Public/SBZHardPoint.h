#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZHardPoint.generated.h"

class APawn;
class ASBZCombatArea;
class USBZHardPointRecruitmentBoxComponent;
class USBZHardPointRecruitmentSphereComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZHardPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTopParentHardPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval NumberOfDefenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHardPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCombatArea> AssignedCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHardPointVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHardPointRecruitmentBoxComponent* RecruitmentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHardPointRecruitmentSphereComponent* RecruitmentSphere;
    
    ASBZHardPoint();
    UFUNCTION(BlueprintCallable)
    void PopAllDefenders();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinNumberOfDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurNumberOfDefenders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAllDefenderPawns() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAtRuntime();
    
    UFUNCTION(BlueprintCallable)
    void DisableAtRuntime();
    
};


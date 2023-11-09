#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EObjectiveActivity.h"
#include "SBZObjectiveComponent.generated.h"

class AActor;
class USBZObjectiveSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZObjectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* ObjectiveSchematic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveActivity Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAdd;
    
public:
    USBZObjectiveComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSleep(bool bSleep);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetObjective();
    
    UFUNCTION(BlueprintCallable)
    void OnActivity(AActor* ObjectiveInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USBZObjectiveSchematic* InObjectiveSchematic);
    
    UFUNCTION(BlueprintCallable)
    void IncrementObjective();
    
    UFUNCTION(BlueprintCallable)
    void FailObjective();
    
    UFUNCTION(BlueprintCallable)
    void DecrementObjective();
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective();
    
    UFUNCTION(BlueprintCallable)
    void AddObjective();
    
};


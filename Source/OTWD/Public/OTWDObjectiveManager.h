#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveManager.h"
#include "OnGlobalObjectiveTextChangedDelegate.h"
#include "OTWDObjectiveManager.generated.h"

class UOTWDGlobalObjectiveData;
class UObject;
class USBZObjectiveSchematic;

UCLASS(Blueprintable)
class OTWD_API AOTWDObjectiveManager : public ASBZObjectiveManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalObjectiveTextChanged OnGlobalObjectiveTextChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlobalObjective, meta=(AllowPrivateAccess=true))
    FText GlobalObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GlobalObjective, meta=(AllowPrivateAccess=true))
    UOTWDGlobalObjectiveData* CurrentGlobalObjective;
    
public:
    AOTWDObjectiveManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalObjectiveText(UObject* WorldContextObject, const FText& NewGlobalObjectiveText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalObjective(UObject* WorldContextObject, UOTWDGlobalObjectiveData* NewGlobalObjective);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalObjective();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddObjectiveOTWD(UObject* WorldContextObject, USBZObjectiveSchematic* MainObjective, USBZObjectiveSchematic* SubObjective, bool bChangeTargetCount, int32 TargetCount);
    
};


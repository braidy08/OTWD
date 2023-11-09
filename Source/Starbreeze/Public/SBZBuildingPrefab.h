#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBZBuildingAccessState.h"
#include "SBZBuildingAccessDefinition.h"
#include "SBZBuildingAccessDoorData.h"
#include "SBZBuildingAccessInstance.h"
#include "SBZBuildingAccessStateData.h"
#include "SBZBuildingPrefab.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZBuildingPrefab : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingAccessDefinition> BuildingAccessDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingAccessInstance> BuildingAccessInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingAccessDoorData> BuildingAccessDoorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBuildingAccessDoorData DefaultDoorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceBuildingAccessStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBuildingAccessStateData> CurrentAccessStates;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBuildingAccessState DefaultBuildingAccessState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpecialAccessComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> SocketAttachmentMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AutoSocketParents;
    
public:
    ASBZBuildingPrefab();
    UFUNCTION(BlueprintCallable)
    void SetAllAccessesToState(ESBZBuildingAccessState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessStates(const TArray<FSBZBuildingAccessStateData>& NewStates);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessState(FName Identifier, ESBZBuildingAccessState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAccessProcessSpecialComponent(const FName& Identifier, const FSBZBuildingAccessInstance& InstanceData, ESBZBuildingAccessState State, USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAccessActorSpawned(const FName& Identifier, const FSBZBuildingAccessInstance& InstanceData, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingForcedBuildingAccessStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccess(FName Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetBuildingAccessIdentifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetAccessTransform(FName Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZBuildingAccessDoorData GetAccessDoorData(FName Identifier) const;
    
};


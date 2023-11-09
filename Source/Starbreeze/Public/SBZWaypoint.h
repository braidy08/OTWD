#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SBZWaypoint.generated.h"

class USBZMarkerWidget;
class USBZObjectiveSchematic;
class USBZUIMarker;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMarkerOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_TargetSceneComponent, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMarkerWidget> OnScreenBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMarkerWidget> OffScreenBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OnScreenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OffScreenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOnScreenTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasOffScreenTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibleDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarker* Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsMarkerVisible, meta=(AllowPrivateAccess=true))
    bool bIsMarkerVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PivotComponent;
    
public:
    ASBZWaypoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetSceneComponent(USceneComponent* InTargetSceneComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetActor(AActor* InTargetActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMarkerVisible(bool bInIsMarkerVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetSceneComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsMarkerVisible();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AssignObjectiveAndLocation(USBZObjectiveSchematic* ObjectiveSchematics, AActor* Volume);
    
};


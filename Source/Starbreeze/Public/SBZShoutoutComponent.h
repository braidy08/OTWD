#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESBZShoutActionType.h"
#include "SBZShoutoutComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class USBZOutlineSchematic;
class USBZShoutTargetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZShoutoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaytraceTargetFindDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AproximateTargetFindBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* MarkingOutlineSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShoutoutTargetLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
public:
    USBZShoutoutComponent();
    UFUNCTION(BlueprintCallable)
    void SetMarkLimit(int32 NewLimit);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsActorMarked(AActor* Actor);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SBZWorldRuntimeBase.h"
#include "SBZWorldRuntime.generated.h"

class UObject;
class USBZActorContainer;
class USBZObjectContainer;
class USBZObjectRingBuffer;
class USBZObservableActorContainer;
class USBZParticlePool;
class USBZWorldRuntime;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Starbreeze)
class STARBREEZE_API USBZWorldRuntime : public USBZWorldRuntimeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObservableActorContainer* AllPlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObservableActorContainer* AllAlivePlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllHumanAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllTraps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectContainer* AllLootContainerInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllPlayBubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZActorContainer* AllExposedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectContainer* PendingVisibilityDeleteActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectRingBuffer* RagdollActorsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZObjectRingBuffer* DebrisActorsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZParticlePool* ParticlePool;
    
    USBZWorldRuntime();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZWorldRuntime* Get(const UObject* WorldContextObject);
    
};


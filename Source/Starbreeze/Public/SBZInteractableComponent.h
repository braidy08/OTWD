#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.h"
#include "EInteractionAnimationType.h"
#include "EInteractionFactionRestriction.h"
#include "ESBZVoiceComment.h"
#include "IsInteractionAllowedByInteractorDelegate.h"
#include "OnInteractableHighlightMeshesChangedDelegate.h"
#include "OnInteractionEndedDelegate.h"
#include "OnInteractionPreventedDelegate.h"
#include "OnInteractionProgressChangedDelegate.h"
#include "OnInteractionStartedDelegate.h"
#include "OnInteractionStateChangedDelegate.h"
#include "OnInteractionSuccessfulDelegate.h"
#include "OnInteractionTickDelegate.h"
#include "OnIsRelevantChangedDelegate.h"
#include "SBZFactionIdHelper.h"
#include "SBZGameplayEffectData.h"
#include "SBZLookAtShapeToOutlineComponentMap.h"
#include "Templates/SubclassOf.h"
#include "SBZInteractableComponent.generated.h"

class UMeshComponent;
class UPrimitiveComponent;
class USBZBaseInteractorComponent;
class USBZGameplayAbilityQuery;
class USBZInteractableComponent;
class USBZInteractableTemplate;
class USBZInteractionWidget;
class USBZOutlineComponent;
class USBZOutlineSchematic;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZInteractableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute InteractionSpeedMultiplierAttribute;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionSuccessful OnInteractionSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionEnded OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionPrevented OnLocalInteractionPrevented;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionTick OnInteractionTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsRelevantChanged OnIsRelevantChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionSuccessful OnLocalInteractionSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStateChanged OnInteractionStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStateChanged OnServerInteractionStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionProgressChanged OnInteractionProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableHighlightMeshesChanged OnInteractableHighlightMeshesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsInteractionAllowedByInteractor IsInteractionAllowedByInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionInitiallyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* HighlightOutlineSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* IsInteractableOutlineSchematic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractableTemplate> InteractionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLoot, meta=(AllowPrivateAccess=true))
    uint8 bIsLoot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideDuration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideNotAllowedText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideOccupiedText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideMaxDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverridePriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideMaxNumInteractors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverridePlayAnimationOnInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAnimationType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInteractionWidgetClass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCanInteractQuery: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInteractStartVoiceComment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInteractSuccessVoiceComment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotAllowedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NotAllowedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OccupiedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxNumInteractors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimationOnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractionWidget> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGameplayAbilityQuery* GameplayInteractionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment InteractStartVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment InteractSuccessVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreGameplayEffectsFromTemplate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayEffectData> GameplayEffectsOnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionIdHelper Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionFactionRestriction RestrictTo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> LookAtShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseInteractorComponent*> ExlusiveInteractors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLocalInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseInteractorComponent*> Interactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLookAtShapeToOutlineComponentMap> OutlineComponentToShapesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Enabled, meta=(AllowPrivateAccess=true))
    bool bInteractionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionProgress, meta=(AllowPrivateAccess=true))
    float InteractionProgress;
    
public:
    USBZInteractableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTemplate(TSubclassOf<USBZInteractableTemplate> NewTemplate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxNumInteractors(uint8 NewMaxNumInteractors);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDistance(float NewMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtShapes(TArray<UPrimitiveComponent*> InLookAtShapes);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatShapeOutlineConnection(UPrimitiveComponent* LookAtShape, USBZOutlineComponent* Outline, bool bUseLookAtShapeAsOutlinePosition);
    
    UFUNCTION(BlueprintCallable)
    USBZOutlineComponent* SetLookatShapeHightlightMeshesConnection(UPrimitiveComponent* LookAtShape, TArray<UMeshComponent*> MeshesToHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractableOutlineSchematic(USBZOutlineSchematic* InIsInteractableOutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionWidgetClass(TSubclassOf<USBZInteractionWidget> InInteractionWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionSpeedModifier(float InSpeedModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionEnabled(bool bInInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightSchematic(USBZOutlineSchematic* InHighlightOutlineSchematic);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayInteractionQuery(USBZGameplayAbilityQuery* InGameplayInteractionQuery);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayEffectsOnInteract(const TArray<FSBZGameplayEffectData> GameplayEffects);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowLocalInteraction(bool bInInteractionEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLoot();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionProgress(float OldInteractionProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Enabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnInteractionEnded(USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InteractionSuccessful(const TArray<USBZBaseInteractorComponent*>& NewInteractors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInteractionAllowed(const USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionNotAllowedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInteractableTemplate* GetTemplate() const;
    
    UFUNCTION(BlueprintCallable)
    USBZOutlineComponent* GetOutlineComponentForLookAtShape(UPrimitiveComponent* LookAtShape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetMaxNumInteractors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> GetLookAtShapes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZBaseInteractorComponent*> GetInteractors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USBZInteractionWidget> GetInteractionWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText GetInteractionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionProgress(bool bNormalize) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<USBZOutlineComponent*> GetInteractionOutlineComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractionOccupiedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractionNotAllowedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInteractionNotAllowedIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameplayAbilityQuery* GetGameplayInteractionQuery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameplayEffectsOnInteract(TArray<FSBZGameplayEffectData>& GameplayEffects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllHighlightMeshComponents(TArray<UMeshComponent*>& OutMeshComponents) const;
    
    UFUNCTION(BlueprintCallable)
    void ExlusiveInteractorsRemove(const USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void ExlusiveInteractorsAdd(const USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void CopyLookAtShapesToOtherInteractable(USBZInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable)
    void CopyHighlightMeshesToOtherInteractable(USBZInteractableComponent* InInteractableComponent);
    
};


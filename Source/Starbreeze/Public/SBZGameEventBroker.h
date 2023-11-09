#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZPassiveAbilityState.h"
#include "OnAbilityAttributeChangedDelegate.h"
#include "OnAbilityItemCraftedDelegate.h"
#include "OnActorMarkedDelegate.h"
#include "OnAmmoPickupDelegate.h"
#include "OnAsyncLoadProgressUpdatedDelegate.h"
#include "OnAsyncLoadStateChangedDelegate.h"
#include "OnAttackEndDelegate.h"
#include "OnCharacterGotHitDelegate.h"
#include "OnCharacterGrappledDelegate.h"
#include "OnCharacterKilledDelegate.h"
#include "OnCinematicStateChangedDelegate.h"
#include "OnGlobalTechPurchasedDelegate.h"
#include "OnHideLevelTutorialDelegate.h"
#include "OnLoadingScreenEventDelegate.h"
#include "OnPlayerAttackDelegate.h"
#include "OnPlayerCharacterPossessedDelegate.h"
#include "OnPlayerOnlineStatusChangedDelegateDelegate.h"
#include "OnPopupClosedDelegate.h"
#include "OnPopupOpenedDelegate.h"
#include "OnPopupsAndNotificationsClearedDelegate.h"
#include "OnProjectileHitDelegate.h"
#include "OnSeamlessTravelFinishedDelegate.h"
#include "OnShowLevelTutorialDelegate.h"
#include "OnStateEnteredDelegate.h"
#include "OnToggleVersionNumberDisplayDelegate.h"
#include "OnWaitActionPhaseFailedDelegate.h"
#include "SBZGameEventBroker.generated.h"

class AActor;
class AController;
class APawn;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameEventBroker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterKilled OnCharacterKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoPickup OnAmmoPickup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerAttack OnPlayerAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterGotHit OnCharacterGotHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackEnd OnAttackEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileHit OnProjectileHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupOpened OnPopupOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupClosed OnPopupClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopupsAndNotificationsCleared OnPopupsAndNotificationsCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorMarked OnActorMarked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalTechPurchased OnGlobalTechPurchased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCharacterPossessed OnPlayerCharacterPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityItemCrafted OnAbilityItemCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityAttributeChanged OnSignatureCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityAttributeChanged OnSecondaryCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityAttributeChanged OnToolCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterGrappled OnCharacterGrappled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerOnlineStatusChangedDelegate OnPlayerJoinedLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerOnlineStatusChangedDelegate OnPlayerLeftLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicStateChanged OnCinematicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicStateChanged OnCinematicStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadStateChanged OnAsyncLoadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadStateChanged OnAsyncLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncLoadProgressUpdated OnAsyncLoadProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateEntered OnWaitActionPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateEntered OnActionPhaseEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeamlessTravelFinished OnSeamlessTravelFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaitActionPhaseFailed OnWaitActionPhaseFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenEvent OnReturnToMainMenuStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenEvent OnReturnToMainMenuWaitOtherPlayersStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenEvent OnReturnToMainMenuStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleVersionNumberDisplay OnToggleVersionNumberDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowLevelTutorial OnShowLevelTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideLevelTutorial OnHideLevelTutorial;
    
    USBZGameEventBroker();
    UFUNCTION(BlueprintCallable)
    void PostOnPlayerCharacterPossessed(AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PostOnPassiveAbilityUpdated(APawn* Owner, ESBZPassiveAbilityState NewState);
    
    UFUNCTION(BlueprintCallable)
    void PostOnActorMarked(AActor* Actor, bool bIsMarked);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCinematicStopped();
    
};


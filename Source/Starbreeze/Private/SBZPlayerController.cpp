#include "SBZPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "SBZPlayerDramaComponent.h"
#include "Templates/SubclassOf.h"

void ASBZPlayerController::ToggleInGameMenu() {
}

void ASBZPlayerController::SetSpectating(bool bSpectate, bool bAllowAutoRespawn) {
}

void ASBZPlayerController::SetAnalyticsUserId(const FString& NewAnalyticsId) {
}

void ASBZPlayerController::Server_SendMissionReward_Implementation(const FSBZNetStruct& MissionReward) {
}
bool ASBZPlayerController::Server_SendMissionReward_Validate(const FSBZNetStruct& MissionReward) {
    return true;
}

void ASBZPlayerController::Server_RequestGrapple_Implementation(AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, FSBZGrappleAlignmentSettings AlignmentSettings) {
}
bool ASBZPlayerController::Server_RequestGrapple_Validate(AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, FSBZGrappleAlignmentSettings AlignmentSettings) {
    return true;
}

void ASBZPlayerController::Server_ProjectileHit_Implementation(AActor* ProjectileOwner, FProjectileHitScanResult OutHit) {
}
bool ASBZPlayerController::Server_ProjectileHit_Validate(AActor* ProjectileOwner, FProjectileHitScanResult OutHit) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaUnRegisterListener_Implementation(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController) {
}
bool ASBZPlayerController::Server_DrawAreaUnRegisterListener_Validate(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaSendDataToHost_Implementation(int32 RequestingPlayerID, int32 SourcePlayerID, const FName& DrawArea, const FRenderTargetData Data) {
}
bool ASBZPlayerController::Server_DrawAreaSendDataToHost_Validate(int32 RequestingPlayerID, int32 SourcePlayerID, const FName& DrawArea, const FRenderTargetData Data) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaRegisterListener_Implementation(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController) {
}
bool ASBZPlayerController::Server_DrawAreaRegisterListener_Validate(const FName& DrawArea, int32 PlayerId, ASBZPlayerController* PlayerController) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaInvalidateDataCache_Implementation(int32 PlayerId, const FName& DrawArea) {
}
bool ASBZPlayerController::Server_DrawAreaInvalidateDataCache_Validate(int32 PlayerId, const FName& DrawArea) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaBroadcastClear_Implementation(int32 PlayerId, const FName& DrawArea) {
}
bool ASBZPlayerController::Server_DrawAreaBroadcastClear_Validate(int32 PlayerId, const FName& DrawArea) {
    return true;
}

void ASBZPlayerController::Server_DrawAreaBroadcastActionBuffer_Implementation(int32 PlayerId, const FName& DrawArea, const FDrawAreaActionBuffer& ActionBuffer) {
}
bool ASBZPlayerController::Server_DrawAreaBroadcastActionBuffer_Validate(int32 PlayerId, const FName& DrawArea, const FDrawAreaActionBuffer& ActionBuffer) {
    return true;
}

void ASBZPlayerController::Server_ClientVoteToKick_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZPlayerController::Server_ClientVoteToKick_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZPlayerController::Server_ClientSendChatMessage_Implementation(const FSBZChatMessage& Message) {
}
bool ASBZPlayerController::Server_ClientSendChatMessage_Validate(const FSBZChatMessage& Message) {
    return true;
}

void ASBZPlayerController::Server_ClientInitiateKicking_Implementation(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
}
bool ASBZPlayerController::Server_ClientInitiateKicking_Validate(FUniqueNetIdRepl PlayerIdToKick, FUniqueNetIdRepl PlayerProposingKick, ESBZKickingMode ModeKick) {
    return true;
}

void ASBZPlayerController::Server_ClientInitGrappleResult_Implementation(int32 EventID, bool bCanStart) {
}
bool ASBZPlayerController::Server_ClientInitGrappleResult_Validate(int32 EventID, bool bCanStart) {
    return true;
}

void ASBZPlayerController::Server_ChangeLoadout_Implementation(const FSBZPlayerLoadout& NewLoadout, const FSBZProfileInfo& NewProfileInfo) {
}
bool ASBZPlayerController::Server_ChangeLoadout_Validate(const FSBZPlayerLoadout& NewLoadout, const FSBZProfileInfo& NewProfileInfo) {
    return true;
}

void ASBZPlayerController::Server_AsyncChangeLoadout_Implementation(const FAsyncChangeLoadoutPayload& Payload, bool bResetBeforeChanging) {
}
bool ASBZPlayerController::Server_AsyncChangeLoadout_Validate(const FAsyncChangeLoadoutPayload& Payload, bool bResetBeforeChanging) {
    return true;
}

void ASBZPlayerController::Respawn() {
}

void ASBZPlayerController::PrintLoadout() {
}

void ASBZPlayerController::OnMissionTimerEvent(bool bShow) {
}


void ASBZPlayerController::OnDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* InOwner) {
}


void ASBZPlayerController::OnCompleteAsyncChangeLoadout(FGuid RequestID, FAsyncChangeLoadoutPayload Payload) {
}

void ASBZPlayerController::NetMulticastSpawnFailed_Implementation() {
}

bool ASBZPlayerController::IsWaitingToSpawnPawn() const {
    return false;
}

bool ASBZPlayerController::IsAsyncChangeLoadoutPending() const {
    return false;
}

TArray<FSBZWeaponConfiguration> ASBZPlayerController::GetWeaponSlotConfigurations() const {
    return TArray<FSBZWeaponConfiguration>();
}

TArray<USBZTech*> ASBZPlayerController::GetTechs() const {
    return TArray<USBZTech*>();
}

ASBZPlayerState* ASBZPlayerController::GetSBZPlayerState() const {
    return NULL;
}

ASBZPlayerCharacter* ASBZPlayerController::GetSBZPlayerCharacter() const {
    return NULL;
}

ASBZCharacter* ASBZPlayerController::GetSBZCharacter() const {
    return NULL;
}

UClass* ASBZPlayerController::GetPawnClass() const {
    return NULL;
}

TArray<USBZCosmetic*> ASBZPlayerController::GetCosmetics() const {
    return TArray<USBZCosmetic*>();
}

FString ASBZPlayerController::GetAnalyticsUserID() const {
    return TEXT("");
}

TArray<TSubclassOf<UGameplayAbility>> ASBZPlayerController::GetAbilityLoadout() const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

TArray<TSubclassOf<UGameplayAbility>> ASBZPlayerController::GetAbilities() const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

void ASBZPlayerController::ExecuteConsoleCommandOnServer_Implementation(const FString& Command) {
}
bool ASBZPlayerController::ExecuteConsoleCommandOnServer_Validate(const FString& Command) {
    return true;
}

void ASBZPlayerController::Client_UnPossessed_Implementation() {
}

void ASBZPlayerController::Client_StartPersonalGrapple_Implementation(int32 EventID, AActor* Attacker, AActor* Victim, FSBZGrappleEventSettings GrappleConfig, float AlignmentDuration, const TArray<int32>& VictimAlignIDs, const TArray<int32>& AttackerAlignIDs) {
}

void ASBZPlayerController::Client_NotifyMissionEnd_Implementation(const FSBZMissionEndContextHandle& ContextHandle) {
}

void ASBZPlayerController::Client_InstigatedGrappleFailed_Implementation(ESBZGrappleRequestFailedReason Reason) {
}

void ASBZPlayerController::Client_DrawAreaSendDataToPlayer_Implementation(int32 SourcePlayerID, const FName& DrawArea, const FRenderTargetData Data) {
}

void ASBZPlayerController::Client_DrawAreaSendDataRequest_Implementation(int32 RequestingPlayerID, const FName& DrawArea) {
}

void ASBZPlayerController::Client_DrawAreaBroadcastClear_Implementation(int32 PlayerId, const FName& DrawArea) {
}

void ASBZPlayerController::Client_DrawAreaBroadcastActionBuffer_Implementation(int32 PlayerId, const FName& DrawArea, const FDrawAreaActionBuffer& ActionBuffer) {
}

void ASBZPlayerController::ClearSeamlessActorsList() {
}

void ASBZPlayerController::CheckLowAmmo() {
}

void ASBZPlayerController::CheatRevive_Implementation(int32 PlayerIndex) {
}
bool ASBZPlayerController::CheatRevive_Validate(int32 PlayerIndex) {
    return true;
}

void ASBZPlayerController::CheatRespawn_Implementation(int32 PlayerIndex) {
}
bool ASBZPlayerController::CheatRespawn_Validate(int32 PlayerIndex) {
    return true;
}

void ASBZPlayerController::CheatGiveWeaponConfiguration_Implementation(const FSBZWeaponConfiguration& WeaponConfiguration) {
}
bool ASBZPlayerController::CheatGiveWeaponConfiguration_Validate(const FSBZWeaponConfiguration& WeaponConfiguration) {
    return true;
}

void ASBZPlayerController::CheatDefeat_Implementation(int32 PlayerIndex, ESBZPlayerDefeatState DesiredState) {
}
bool ASBZPlayerController::CheatDefeat_Validate(int32 PlayerIndex, ESBZPlayerDefeatState DesiredState) {
    return true;
}

void ASBZPlayerController::ChangeLoadoutFromActivePawnSavedData() {
}

void ASBZPlayerController::ChangeLoadout_OLD(TSubclassOf<APawn> NewPawnClass, const TArray<FSBZWeaponConfiguration>& NewWeaponSlotConfigurations, const TArray<TSubclassOf<UGameplayAbility>>& NewAbilities, const TArray<USBZTech*>& NewTechs, const TArray<USBZCosmetic*>& NewCosmetics) {
}

void ASBZPlayerController::ChangeLoadout(const FSBZPlayerLoadout& NewLoadout) {
}

void ASBZPlayerController::AttachAnalyticsUserId() {
}

void ASBZPlayerController::AsyncChangeLoadoutFromActivePawnSavedData(bool bResetBeforeChanging) {
}

void ASBZPlayerController::AddToSeamlessActorsList(AActor* Actor) {
}

void ASBZPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerController, Loadout);
    DOREPLIFETIME(ASBZPlayerController, ProfileInfo);
}

ASBZPlayerController::ASBZPlayerController() {
    this->DramaComponent = CreateDefaultSubobject<USBZPlayerDramaComponent>(TEXT("DramaComponent"));
    this->PreviousPawn = NULL;
    this->SBZCharacter = NULL;
    this->SBZPlayerCharacter = NULL;
    this->PlayerDefeatSettings = NULL;
    this->Corpse = NULL;
    this->LowAmmoLimit = 1;
    this->LowAmmoCheckInterval = 1;
    this->LocalPlayerClass = NULL;
}


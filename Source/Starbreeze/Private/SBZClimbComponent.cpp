#include "SBZClimbComponent.h"
#include "Net/UnrealNetwork.h"

bool USBZClimbComponent::WantToClimb(bool bCheckAngle) const {
    return false;
}

void USBZClimbComponent::UpdateAnimation(float DeltaSeconds) {
}

void USBZClimbComponent::TickClimbComponent(float DeltaTime) {
}

void USBZClimbComponent::StopClimbing() {
}

void USBZClimbComponent::StartClimbing() {
}

void USBZClimbComponent::SetSchematics(USBZClimbSchematic* InSchematics, bool bForce) {
}

void USBZClimbComponent::SetMovementInput(FVector MovementInput) {
}

void USBZClimbComponent::SetCurrentWaitingForLadder(ASBZLadder* InLadder) {
}

void USBZClimbComponent::SetCurrentLadder(ASBZLadder* InLadder) {
}

void USBZClimbComponent::Server_StopClimbing_Implementation() {
}
bool USBZClimbComponent::Server_StopClimbing_Validate() {
    return true;
}

void USBZClimbComponent::Server_StartClimbing_Implementation(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType) {
}
bool USBZClimbComponent::Server_StartClimbing_Validate(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType) {
    return true;
}

void USBZClimbComponent::Server_SetClimbActionType_Implementation(ESBZLadderClimbActionType InClimbActionType, ASBZLadder* InCurrentLadder) {
}
bool USBZClimbComponent::Server_SetClimbActionType_Validate(ESBZLadderClimbActionType InClimbActionType, ASBZLadder* InCurrentLadder) {
    return true;
}

void USBZClimbComponent::ResetMoveToInteraction() {
}

bool USBZClimbComponent::ReserveLadder() {
    return false;
}

void USBZClimbComponent::PlaySoundEvent(ESBZLadderSoundType SoundType, FName SocketName, bool bAttach) {
}

void USBZClimbComponent::OnRep_ServerClimbDatas() {
}

void USBZClimbComponent::NetMulticast_StopClimbing_Implementation() {
}

void USBZClimbComponent::NetMulticast_StartClimbing_Implementation(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType) {
}

void USBZClimbComponent::NetMulticast_SetClimbActionType_Implementation(ESBZLadderClimbActionType InClimbActionType, ASBZLadder* InCurrentLadder) {
}

bool USBZClimbComponent::IsSnapping() const {
    return false;
}

bool USBZClimbComponent::IsLadderEmpty() const {
    return false;
}

bool USBZClimbComponent::IsClimbing() const {
    return false;
}

void USBZClimbComponent::InternalStopClimbing() {
}

void USBZClimbComponent::InternalStartClimbing(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType) {
}

void USBZClimbComponent::InitializeMoveToInteraction(ASBZAICharacter* Owner) {
}

void USBZClimbComponent::Init(ASBZCharacter* InOwningCharacter) {
}

bool USBZClimbComponent::HasLadder() const {
    return false;
}

float USBZClimbComponent::GetNormalizedClimbTime() {
    return 0.0f;
}

bool USBZClimbComponent::GetLadderWaitingNodeLocation(FVector& WaitingNodeLocation) const {
    return false;
}

float USBZClimbComponent::GetFacingLadderAngle() const {
    return 0.0f;
}

ASBZLadder* USBZClimbComponent::GetCurrentWaitingForLader() const {
    return NULL;
}

ASBZLadder* USBZClimbComponent::GetCurrentLadder() const {
    return NULL;
}

bool USBZClimbComponent::GetClosestEntryPoint(FVector& OutClosestEntryPoint) const {
    return false;
}

ESBZLadderDirection USBZClimbComponent::GetCharacterLadderDirection() const {
    return ESBZLadderDirection::Up;
}

void USBZClimbComponent::ExitLadderArea(ASBZLadder* InLadder) {
}

void USBZClimbComponent::EnterLadderArea(ASBZLadder* InLadder) {
}

void USBZClimbComponent::EnableCameraModifier() {
}

void USBZClimbComponent::DisableCameraModifier() {
}

bool USBZClimbComponent::CanExecuteMoveToInteraction() {
    return false;
}

bool USBZClimbComponent::CanClimb() {
    return false;
}

void USBZClimbComponent::CacheDirectionOnLadder(ESBZLadderDirection InDirection) {
}

void USBZClimbComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZClimbComponent, ServerClimbDatas);
}

USBZClimbComponent::USBZClimbComponent() {
    this->Schematic = NULL;
    this->CurrentPlayingMontage = NULL;
}


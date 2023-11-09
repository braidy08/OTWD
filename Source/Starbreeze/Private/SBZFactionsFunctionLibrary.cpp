#include "SBZFactionsFunctionLibrary.h"

bool USBZFactionsFunctionLibrary::NotEqual_FactionNameName(const FSBZFactionNameHelper& A, FName B) {
    return false;
}

bool USBZFactionsFunctionLibrary::NotEqual_FactionNameFactionName(const FSBZFactionNameHelper& A, const FSBZFactionNameHelper& B) {
    return false;
}

bool USBZFactionsFunctionLibrary::NotEqual_FactionIdName(const FSBZFactionIdHelper& A, FName B) {
    return false;
}

bool USBZFactionsFunctionLibrary::NotEqual_FactionIdFactionId(const FSBZFactionIdHelper& A, const FSBZFactionIdHelper& B) {
    return false;
}

bool USBZFactionsFunctionLibrary::IsValid_FactionName(const FSBZFactionNameHelper& X) {
    return false;
}

bool USBZFactionsFunctionLibrary::IsValid_FactionId(const FSBZFactionIdHelper& X) {
    return false;
}

uint8 USBZFactionsFunctionLibrary::GetNumberOfFactions() {
    return 0;
}

TEnumAsByte<ETeamAttitude::Type> USBZFactionsFunctionLibrary::GetFactionAttitude(const FSBZFactionIdHelper& From, const FSBZFactionIdHelper& Towards) {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> USBZFactionsFunctionLibrary::GetActorAttitude(const AActor* From, const AActor* Towards) {
    return ETeamAttitude::Friendly;
}

FString USBZFactionsFunctionLibrary::FactionNameToDisplayName(const FSBZFactionNameHelper Level) {
    return TEXT("");
}

uint8 USBZFactionsFunctionLibrary::FactionIdToInteger(const FSBZFactionIdHelper Level) {
    return 0;
}

FString USBZFactionsFunctionLibrary::FactionIdToDisplayName(const FSBZFactionIdHelper Level) {
    return TEXT("");
}

bool USBZFactionsFunctionLibrary::Equal_FactionNameFactionName(const FSBZFactionNameHelper& A, const FSBZFactionNameHelper& B) {
    return false;
}

bool USBZFactionsFunctionLibrary::Equal_FactionIdFactionId(const FSBZFactionIdHelper& A, const FSBZFactionIdHelper& B) {
    return false;
}

USBZFactionsFunctionLibrary::USBZFactionsFunctionLibrary() {
}


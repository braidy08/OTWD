#include "SBZAIStancesFunctionLibrary.h"

bool USBZAIStancesFunctionLibrary::NotEqual_AIStanceNameName(const FSBZAIStanceNameHelper& A, FName B) {
    return false;
}

bool USBZAIStancesFunctionLibrary::NotEqual_AIStanceNameAIStanceName(const FSBZAIStanceNameHelper& A, const FSBZAIStanceNameHelper& B) {
    return false;
}

bool USBZAIStancesFunctionLibrary::NotEqual_AIStanceIdName(const FSBZAIStanceIdHelper& A, FName B) {
    return false;
}

bool USBZAIStancesFunctionLibrary::NotEqual_AIStanceIdAIStanceId(const FSBZAIStanceIdHelper& A, const FSBZAIStanceIdHelper& B) {
    return false;
}

bool USBZAIStancesFunctionLibrary::IsValid_AIStanceName(const FSBZAIStanceNameHelper& X) {
    return false;
}

bool USBZAIStancesFunctionLibrary::IsValid_AIStanceId(const FSBZAIStanceIdHelper& X) {
    return false;
}

uint8 USBZAIStancesFunctionLibrary::GetNumberOfAIStances() {
    return 0;
}

bool USBZAIStancesFunctionLibrary::Equal_AIStanceNameAIStanceName(const FSBZAIStanceNameHelper& A, const FSBZAIStanceNameHelper& B) {
    return false;
}

bool USBZAIStancesFunctionLibrary::Equal_AIStanceIdAIStanceId(const FSBZAIStanceIdHelper& A, const FSBZAIStanceIdHelper& B) {
    return false;
}

void USBZAIStancesFunctionLibrary::AIStanceNameToStanceId(const FSBZAIStanceNameHelper& Stance, FSBZAIStanceIdHelper& StanceIdHelper) {
}

FString USBZAIStancesFunctionLibrary::AIStanceNameToDisplayName(const FSBZAIStanceNameHelper Stance) {
    return TEXT("");
}

uint8 USBZAIStancesFunctionLibrary::AIStanceIdToInteger(const FSBZAIStanceIdHelper Stance) {
    return 0;
}

FString USBZAIStancesFunctionLibrary::AIStanceIdToDisplayName(const FSBZAIStanceIdHelper Stance) {
    return TEXT("");
}

USBZAIStancesFunctionLibrary::USBZAIStancesFunctionLibrary() {
}


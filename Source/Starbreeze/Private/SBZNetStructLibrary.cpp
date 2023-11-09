#include "SBZNetStructLibrary.h"

bool USBZNetStructLibrary::WriteStruct(FSBZNetStruct& InNetStruct, const FSBZNetStubStruct& InStruct) {
    return false;
}

void USBZNetStructLibrary::SetIdentifier(FSBZNetStruct& InNetStruct, uint8 InIdentifier) {
}

bool USBZNetStructLibrary::ReadStruct(FSBZNetStruct& InNetStruct, FSBZNetStubStruct& OutStruct) {
    return false;
}

bool USBZNetStructLibrary::IsValid(FSBZNetStruct& InNetStruct) {
    return false;
}

uint8 USBZNetStructLibrary::GetIdentifier(FSBZNetStruct& InNetStruct) {
    return 0;
}

USBZNetStructLibrary::USBZNetStructLibrary() {
}


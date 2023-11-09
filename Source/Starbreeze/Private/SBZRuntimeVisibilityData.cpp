#include "SBZRuntimeVisibilityData.h"

ESBZVisibilityResult USBZRuntimeVisibilityData::K2_IsPointVisibleFromPoints(const UObject* WorldContextObject, const FVector& Target, const TArray<FVector>& Sources) const {
    return ESBZVisibilityResult::Lowest;
}

ESBZVisibilityResult USBZRuntimeVisibilityData::K2_IsBoxVisibleFromPoints(const UObject* WorldContextObject, const FBox& Target, const TArray<FVector>& Sources) const {
    return ESBZVisibilityResult::Lowest;
}

ESBZVisibilityResult USBZRuntimeVisibilityData::IsPointVisibleFromPoint(const UObject* WorldContextObject, const FVector& Target, const FVector& Source) const {
    return ESBZVisibilityResult::Lowest;
}

ESBZVisibilityResult USBZRuntimeVisibilityData::IsBoxVisibleFromPoint(const UObject* WorldContextObject, const FBox& Target, const FVector& Source) const {
    return ESBZVisibilityResult::Lowest;
}

USBZRuntimeVisibilityData* USBZRuntimeVisibilityData::GetRuntimeVisibilityData(const UObject* WorldContextObject) {
    return NULL;
}

USBZRuntimeVisibilityData::USBZRuntimeVisibilityData() {
}


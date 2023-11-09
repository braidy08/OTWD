#include "MutableFloat.h"

FMutableFloat::FMutableFloat() {
    this->BaseValue = 1;
    this->CachedBaseModifiersSum = 1;
    this->CachedMultipliersProduct = 1;
    this->CachedModifiersSum = 1;
}


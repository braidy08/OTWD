#include "AISchematicZombie.h"

float UAISchematicZombie::GetGrappleDistanceHeight(const UObject* WorldContextObject) {
    return 0.0f;
}

float UAISchematicZombie::GetGrappleDistance2D(const UObject* WorldContextObject) {
    return 0.0f;
}

UAISchematicZombie::UAISchematicZombie() {
    this->MinTimeEatingCorpse = 1;
    this->MaxTimeEatingCorpse = 1;
    this->GrappleDistance2D = 1;
    this->GrappleDistanceHeight = 1;
}


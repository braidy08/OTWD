#include "SBZDamageDealtWidget.h"

void USBZDamageDealtWidget::SetupWidget(UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* HitAnimation) {
}

void USBZDamageDealtWidget::OnRadialDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& Origin, const FRadialDamageParams& Params, const TArray<FHitResult>& HitInfos) {
}

void USBZDamageDealtWidget::OnPointDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& ShotDirection, const FHitResult& HitInfo) {
}

void USBZDamageDealtWidget::OnOverlapDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& OriginDirection, const TArray<FHitResult>& HitInfos) {
}


void USBZDamageDealtWidget::OnCharacterKilled(const FSBZOnKillData& KillData) {
}

void USBZDamageDealtWidget::OnAnyDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) {
}

USBZDamageDealtWidget::USBZDamageDealtWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bRespondsToAnyDamageEvents = false;
    this->bRespondsToPointDamageEvents = true;
    this->bRespondsToRadialDamageEvents = true;
    this->bRespondsToOverlapDamageEvents = true;
    this->HeadBoneName = TEXT("Head");
    this->FadeOutAnim = NULL;
    this->HitAnim = NULL;
    this->GameSettings = NULL;
}


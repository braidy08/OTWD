#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Blueprint/UserWidget.h"
#include "SBZDamageDealtInfo.h"
#include "SBZOnKillData.h"
#include "SBZDamageDealtWidget.generated.h"

class AActor;
class UDamageType;
class USBZGameUserSettings;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDamageDealtWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondsToAnyDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondsToPointDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondsToRadialDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespondsToOverlapDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WeakPointBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameUserSettings* GameSettings;
    
public:
    USBZDamageDealtWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidget(UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* HitAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRadialDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& Origin, const FRadialDamageParams& Params, const TArray<FHitResult>& HitInfos);
    
    UFUNCTION(BlueprintCallable)
    void OnPointDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& ShotDirection, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser, const FVector& OriginDirection, const TArray<FHitResult>& HitInfos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageDealt(const FSBZDamageDealtInfo& DamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterKilled(const FSBZOnKillData& KillData);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyDamageDealt(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDynamicValueType.h"
#include "EMutatorType.h"
#include "GamePropertyConfig.h"
#include "SBZDynamicGameProperty.h"
#include "SBZStaticGameProperty.h"
#include "Templates/SubclassOf.h"
#include "SBZPropertyComponent.generated.h"

class USBZGameProperty;
class USBZPropertyModifier;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPropertyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamePropertyConfig> InitialProperties;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZGameProperty*> Properties;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPropertyModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZStaticGameProperty> StaticGameProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZDynamicGameProperty> DynamicGameProperties;
    
public:
    USBZPropertyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetDynamicTarget(const int32 PropertyID, const float NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetDynamicCurrent(const int32 PropertyID, const float NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ResetStaticMutator(const int32 PropertyID, const EMutatorType Type, const FName& Identifier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ResetDynamicMutator(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveModifier(USBZPropertyModifier* Modifier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RegisterStaticMutator(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float DefaultValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RegisterDynamicMutator(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidPropertyID(const int32 PropertyID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStaticPropertyID(const FName& PropertyIdentifier);
    
    UFUNCTION(BlueprintCallable)
    float GetStatic(const int32& PropertyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameProperty* GetPropertyByName(FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameProperty* GetProperty(TSubclassOf<USBZGameProperty> PropertyClass) const;
    
    UFUNCTION(BlueprintCallable)
    float GetDynamicValue(const int32& PropertyID, const EDynamicValueType Value);
    
    UFUNCTION(BlueprintCallable)
    float GetDynamicTarget(const int32& PropertyID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDynamicPropertyID(const FName& PropertyIdentifier);
    
    UFUNCTION(BlueprintCallable)
    float GetDynamicCurrent(const int32& PropertyID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ChangeStaticMutator(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ChangeDynamicMutator(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    float ChangeDynamicCurrent(const int32& PropertyID, const float DeltaValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddModifierObject(TSubclassOf<USBZGameProperty> TargetProperty, USBZPropertyModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    USBZPropertyModifier* AddModifier(TSubclassOf<USBZPropertyModifier> ModifierType, TSubclassOf<USBZGameProperty> TargetProperty);
    
};


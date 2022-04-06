// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BossAI.generated.h"

UCLASS()
class WAROFTHEWOODS_API ABossAI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABossAI();

	UPROPERTY(EditAnywhere, Category = "BehaviourTree")
	class UBehaviorTree* BehaviourTree;

	UPROPERTY(EditAnywhere, Category = "BehaviourTree", Meta = (MakeEditWidget = true))
	FVector LeftCorner;

	UPROPERTY(EditAnywhere, Category = "BehaviourTree", Meta = (MakeEditWidget = true))
	FVector RightCorner;

	UPROPERTY(EditAnywhere, Category = "BehaviourTree", Meta = (MakeEditWidget = true))
	FVector Center;

	UPROPERTY(EditAnywhere, Category = "BehaviourTree", Meta = (MakeEditWidget = true))
	FVector LeftPlatform;

	UPROPERTY(EditAnywhere, Category = "BehaviourTree", Meta = (MakeEditWidget = true))
	FVector RightPlatform;

	class ABossAIController* BossController;

	UPROPERTY(EditAnywhere, Category = "BossHealth", meta = (AllowPrivateAccess = true))
	int bossHealth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "BossHealth")
	void BossTakeDamage();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BossHealth")
	int GetBossHealth();

};

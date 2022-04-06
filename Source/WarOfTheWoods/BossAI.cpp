// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAI.h"
#include "BossAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
ABossAI::ABossAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set Boss's starting stats
	bossHealth = 9;

}

// Called when the game starts or when spawned
void ABossAI::BeginPlay()
{
	Super::BeginPlay();

	// Setup locations for Boss AI's blackboard
	FVector Location = GetActorLocation();
	BossController = Cast<ABossAIController>(GetController());

	BossController->GetBlackboard()->SetValueAsVector(TEXT("LeftCorner"), LeftCorner + Location);
	BossController->GetBlackboard()->SetValueAsVector(TEXT("RightCorner"), RightCorner + Location);
	BossController->GetBlackboard()->SetValueAsVector(TEXT("Center"), Center + Location);
	BossController->GetBlackboard()->SetValueAsVector(TEXT("LeftPlatform"), LeftPlatform + Location);
	BossController->GetBlackboard()->SetValueAsVector(TEXT("RightPlatform"), RightPlatform + Location);
	
}

// Called every frame
void ABossAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABossAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABossAI::BossTakeDamage()
{
	if (--bossHealth < 0)
	{
		bossHealth = 0;
	}
}

int ABossAI::GetBossHealth()
{
	return bossHealth;
}

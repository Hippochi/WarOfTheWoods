// Fill out your copyright notice in the Description page of Project Settings.


#include "BossAIController.h"
#include "BossAI.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

ABossAIController::ABossAIController()
{
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComponent"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
}

void ABossAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Initialize the Boss's behaviour tree
	if (InPawn)
	{
		ABossAI* BossAI = Cast<ABossAI>(InPawn);
		if (BossAI)
		{
			if (BossAI->BehaviourTree)
			{
				BlackboardComponent->InitializeBlackboard(*(BossAI->BehaviourTree->BlackboardAsset));
				BehaviourTreeComponent->StartTree(*(BossAI->BehaviourTree));
			}
		}
	}
}

UBlackboardComponent* ABossAIController::GetBlackboard()
{
	return BlackboardComponent;
}

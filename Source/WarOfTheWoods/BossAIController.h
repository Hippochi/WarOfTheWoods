// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BossAIController.generated.h"

/**
 * 
 */
UCLASS()
class WAROFTHEWOODS_API ABossAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ABossAIController();

	virtual void OnPossess(APawn* InPawn) override;

	UBlackboardComponent* GetBlackboard();

protected:

	UPROPERTY(BlueprintReadWrite, Category = "Behaviour")
	class UBehaviorTreeComponent* BehaviourTreeComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Behaviour")
	class UBlackboardComponent* BlackboardComponent;
};

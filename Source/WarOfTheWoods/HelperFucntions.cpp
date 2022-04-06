// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperFucntions.h"
#include "Kismet/GameplayStatics.h"
#include "AchievementSubSystem.h"

class UAchievementSubSystem* UHelperFucntions::GetAchievementSystem(const UObject* WorldContextObject)
{
	UGameInstance* gameInstance = UGameplayStatics::GetGameInstance(WorldContextObject);
	return gameInstance->GetSubsystem<UAchievementSubSystem>();
}

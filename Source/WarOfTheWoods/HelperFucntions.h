// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HelperFucntions.generated.h"

/**
 * 
 */
UCLASS()
class WAROFTHEWOODS_API UHelperFucntions : public UObject
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, Category = "Achievements", meta = (WorldContext = "WorldContextObject"))
		static class UAchievementSubSystem* GetAchievementSystem(const UObject* WorldContextObject);
	
};

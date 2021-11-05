// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PizzaRaceGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PIZZARACE_API APizzaRaceGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Timer")
	void StartTimer();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void DisplayEndMessage();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Timer")
	void EndTimer();

protected:


};

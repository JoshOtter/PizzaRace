// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PizzaRaceGameModeBase.generated.h"

class UGameHUD;

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


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	int Seconds = 30;

protected:

	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Message", meta = (BlueprintProtected))
	FString LessThanTwo = "Just in Time!";
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Message", meta = (BlueprintProtected))
	FString TwotoFive = "Have you been practicing? Good Job!";
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Message", meta = (BlueprintProtected))
	FString MoreThanFive = "Be Honest. Did you fly up here?";
};

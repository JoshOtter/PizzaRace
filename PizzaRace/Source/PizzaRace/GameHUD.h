// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

class APizzaRaceGameModeBase;

/**
 * 
 */
UCLASS()
class PIZZARACE_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Timer")
	void KeepTime();

protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	APizzaRaceGameModeBase* GameModeRef;
};

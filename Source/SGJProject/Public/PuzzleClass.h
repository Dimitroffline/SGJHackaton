// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleClass.generated.h"

UCLASS()
class SGJPROJECT_API APuzzleClass : public AActor
{
	GENERATED_BODY()
	
private:

public:	
	// Sets default values for this actor's properties
	APuzzleClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

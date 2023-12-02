// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APuzzleActor.generated.h"
#include "APuzzleTile.h"
using std::vector;

UCLASS()
class SGJPROJECT_API APuzzleActor : public AActor
{
	GENERATED_BODY()
private:
	vector<APuzzleTile> tiles;

public:
	// Sets default values for this actor's properties
	APuzzleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
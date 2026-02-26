// Fill out your copyright notice in the Description page of Project Settings.


#include "villageactor.h"

// Sets default values
Avillageactor::Avillageactor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Avillageactor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Avillageactor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


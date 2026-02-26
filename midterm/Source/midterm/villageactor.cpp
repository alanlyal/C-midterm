#include "VillageActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

AVillageActor::AVillageActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	Light->SetupAttachment(Root);

}

void AVillageActor::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(ActorLocation);
	SetActorRotation(ActorRotation);
}

void AVillageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVillageActor::SetActorLocationCustom(FVector NewLocation)
{
	ActorLocation = NewLocation;
	SetActorLocation(ActorLocation);
}

FVector AVillageActor::GetActorLocationCustom() const
{
	return ActorLocation;
}

void AVillageActor::SetActorRotationCustom(FRotator NewRotation)
{
	ActorRotation = NewRotation;
	SetActorRotation(ActorRotation);
}

FRotator AVillageActor::GetActorRotationCustom() const
{
	return ActorRotation;
}

void AVillageActor::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Base Actor Interacted"));
}

void AVillageActor::UpdateApperance()
{
	UE_LOG(LogTemp, Warning, TEXT("Base ApperanceUpdated"));
}


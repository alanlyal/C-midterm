#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "VillageActor.generated.h"

UCLASS()
class MIDTERM_API AVillageActor : public AActor
{
	GENERATED_BODY()

public:
	AVillageActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Components
	UPROPERTY(VisibleAnywhere)USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)UPointLightComponent* Light;

	// Transform Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FVector ActorLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)FRotator ActorRotation;

	// Getter/Setter
	void SetActorLocationCustom(FVector NewLocation);
	FVector GetActorLocationCustom() const;

	void SetActorRotationCustom(FRotator NewRotation);
	FRotator GetActorRotationCustom() const;

	// Polymophism
	virtual void Interact();
	virtual void UpdateApperance();

};

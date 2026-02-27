#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "LampActor.generated.h"

UCLASS()
class MIDTERM_API ALampActor : public AVillageActor
{
	GENERATED_BODY()

public:
	ALampActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lamp")
	float PulseSpeed = 2.0f;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	UMaterialInstanceDynamic* DynamicMaterial;

public:
	void ChangeLampColor(FLinearColor NewColor);
};

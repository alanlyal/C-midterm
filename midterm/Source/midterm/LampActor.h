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

protected:
	virtual void BeginPlay() override;

private:
	UMaterialInstanceDynamic* DynamicMaterial;

public:
	void ChangeLampColor(FLinearColor NewColor);
};

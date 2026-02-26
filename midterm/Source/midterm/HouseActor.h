#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "HouseActor.generated.h"

UCLASS()
class MIDTERM_API AHouseActor : public AVillageActor
{
	GENERATED_BODY()

public:
	AHouseActor();

	virtual void Interact() override;
	virtual void UpdateApperance() override;

protected:
	void CreateWindows();
};

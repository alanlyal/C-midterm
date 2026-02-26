#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "WellActor.generated.h"

UCLASS()
class MIDTERM_API AWellActor : public AVillageActor
{
	GENERATED_BODY()

public:
	AWellActor();

	virtual void Interact() override;
	virtual void UpdateApperance() override;
};

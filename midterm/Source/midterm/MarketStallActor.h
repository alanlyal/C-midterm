#pragma once

#include "CoreMinimal.h"
#include "VillageActor.h"
#include "MarketStallActor.generated.h"

UCLASS()
class MIDTERM_API AMarketStallActor : public AVillageActor
{
	GENERATED_BODY()

public:
	AMarketStallActor();

	virtual void Interact() override;
	virtual void UpdateApperance() override;
};

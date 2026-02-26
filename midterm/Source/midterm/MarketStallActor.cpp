#include "MarketStallActor.h"

AMarketStallActor::AMarketStallActor() {
}

void AMarketStallActor::Interact() {
	UE_LOG(LogTemp, Warning, TEXT("Browsing market goods"));
}

void AMarketStallActor::UpdateApperance() {
	UE_LOG(LogTemp, Warning, TEXT("Market Stall Apperance Updated"));
}
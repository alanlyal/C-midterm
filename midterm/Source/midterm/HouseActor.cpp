#include "HouseActor.h"

AHouseActor::AHouseActor() {
	CreateWindows();
}

void AHouseActor::CreateWindows() {
	for (int i = 0; i < 4; i++) {
		UE_LOG(LogTemp, Warning, TEXT("Creating window %d"), i);
	}
}

void AHouseActor::Interact() {
	UE_LOG(LogTemp, Warning, TEXT("Entered the House"));
}

void AHouseActor::UpdateApperance() {
	UE_LOG(LogTemp, Warning, TEXT("House Apperance Updated"));
}
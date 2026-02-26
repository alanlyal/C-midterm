#include "WellActor.h"

AWellActor::AWellActor() {
}

void AWellActor::Interact() {
	UE_LOG(LogTemp, Warning, TEXT("Drawing water from the well"));
}

void AWellActor::UpdateApperance() {
	UE_LOG(LogTemp, Warning, TEXT("Well Apperance Updated"));
}


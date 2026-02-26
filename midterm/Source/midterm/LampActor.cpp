#include "LampActor.h"
#include "Materials/MaterialInstanceDynamic.h"

ALampActor::ALampActor() {
}

void ALampActor::BeginPlay() {
	Super::BeginPlay();
	if (Mesh) {
		DynamicMaterial = Mesh->CreateAndSetMaterialInstanceDynamic(0);
	}
}

void ALampActor::ChangeLampColor(FLinearColor NewColor) {
	if (DynamicMaterial) {
		DynamicMaterial->SetVectorParameterValue("Color", NewColor);
	}
}


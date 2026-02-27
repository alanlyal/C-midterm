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

void ALampActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float t = GetWorld()->GetTimeSeconds();
    float intensity = 3000.0f + 2000.0f * FMath::Sin(t * PulseSpeed);

    if (Light) Light->SetIntensity(intensity);

    if (DynamicMaterial)
    {
        FLinearColor color = FLinearColor::MakeFromHSV8(
            (uint8)(t * 50), 255, 255
        );
        DynamicMaterial->SetVectorParameterValue("BaseColor", color);
    }
}

void ALampActor::ChangeLampColor(FLinearColor NewColor) {
	if (DynamicMaterial) {
		DynamicMaterial->SetVectorParameterValue("Color", NewColor);
	}
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PAnimInstance.h"
#include "Character/PCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UPAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	PCharacter = Cast<APCharacter>(TryGetPawnOwner());
	if(PCharacter)
	{
		PCharacterMovement = PCharacter->GetCharacterMovement();
	}
}

void UPAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if(PCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(PCharacterMovement->Velocity);
		IsFalling = PCharacterMovement->IsFalling();
	}
}

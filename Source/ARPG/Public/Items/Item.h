// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h" //包含反射系统

UCLASS()
class ARPG_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure) //不改变任何东西，单纯计算一个值
	float TransformedSin(float Value);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sine Parameters") //蓝图继承class，不能设为私有，否则这个属性继承类无法访问
	float Amplitude = 0.75f;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Sine Parameters")
	float TimeConstant = 5.f;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;
	

};

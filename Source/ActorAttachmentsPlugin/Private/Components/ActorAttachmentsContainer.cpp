// All rights reserved Dominik Pavlicek 2022.


#include "Components/ActorAttachmentsContainer.h"

UActorAttachmentsContainer::UActorAttachmentsContainer()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UActorAttachmentsContainer::BeginPlay()
{
	Super::BeginPlay();
}
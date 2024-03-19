

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Aura/Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	

public:
	AAuraEnemy();

	virtual void BeginPlay() override;
	virtual void HighLightActor()  override;
	virtual void UnHigLightActor() override;
	

	
	
};

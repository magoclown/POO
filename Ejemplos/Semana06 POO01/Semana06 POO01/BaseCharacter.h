#include "Status.h"
#pragma once
class BaseCharacter
{
protected:
	Status status;
public:
	virtual void Damage(int damage);
	virtual void Move();
	virtual void Death();
	virtual void Attack();
};


#pragma once
#include "Weapon.h"

#ifndef __SWORD_H_
#define __SWORD_H_

class Sword : public Weapon
{
public:
	Sword();
	virtual ~Sword();

	virtual void Attack() override
	{
		Weapon::Attack();
		Pierce();
	}

protected:
	virtual void Pierce();
};

#endif
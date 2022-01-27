#pragma once
#include "Weapon.h"

#ifndef __GUN_H__
#define __GUN_H__


/*
 �̰� �� Ŭ����
*/
class Gun : public Weapon
{
public:
	Gun();
	virtual ~Gun();

	int Bullet;

	virtual void Attack() override
	{
		Shot();
		Weapon::Attack();
	}

protected:
	virtual void Shot();

};
#endif


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

	void Shot();
};
#endif


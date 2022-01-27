#pragma once
#include "Weapon.h"

#ifndef __SWORD_H_
#define __SWORD_H_

class Sword : public Weapon
{
public:
	Sword();
	virtual ~Sword();

	void Pierce();
};

#endif
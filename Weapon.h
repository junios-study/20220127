#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "Global.h"


/*
�̰� ���� Ŭ����
����� ���� ���̽� Ŭ����
*/
class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	EMaterials Material = EMaterials::Metal;
};
#endif
#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "Global.h"


/*
이건 무기 클래스
상속을 위한 베이스 클래스
*/
class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	//자식 클래스에서 재정의 가능함, 
	virtual void Attack();

	EMaterials Material = EMaterials::Metal;
};
#endif
#include <iostream>
#include "Weapon.h"
#include "Gun.h"
#include "Sword.h"
#include "Club.h"
#include <vector>



int main()
{
	int InventoryCount = 10;

	std::cin >> InventoryCount;

	//container, 동적 배열
	std::vector<Weapon*> Inventory;

	srand(time(nullptr));
	for (int i = 0; i < InventoryCount; ++i)
	{
		int Type = rand() % 3;
		switch (Type)
		{
			case 0:
				Inventory.push_back(new Sword());
				break;
			case 1:
				Inventory.push_back(new Gun());
				break;
			case 2:
				Inventory.push_back(new Club());
				break;
		}
	}

	for (int i = 0; i < InventoryCount; ++i)
	{
		Inventory[i]->Attack();
	}

	for (int i = 0; i < InventoryCount; ++i)
	{
		delete Inventory[i];
	}

	Inventory.clear();


	return 0;
}
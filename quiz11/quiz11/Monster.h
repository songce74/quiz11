#pragma once
#include "Creature.h"

class Monster :public Creature
{
public:
	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES,
	};

	struct MonsterData
	{
		std::string name;
		char symbol;
		int health;
		int dpa;
		int gold;
	};

	static MonsterData monsterData[3];

public:
	Monster(Type type) :
		Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health,
		monsterData[type].dpa, monsterData[type].gold)
	{
	}
};


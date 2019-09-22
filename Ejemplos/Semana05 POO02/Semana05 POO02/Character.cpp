#include "Character.h"

Character::Character()
{
#ifdef DEBUG
	cout << "FUE INICIALIZADO" << endl;
#endif // DEBUG
}

Character::Character(int hitPoints, int size, int level, int strength, int race):hitPoints(hitPoints),size(size),level(level),strength(strength),race(race)
{
#ifdef DEBUG
	cout << "FUE INICIALIZADO SOBECARA" << endl;
#endif // DEBUG
}

void Character::Damage(int damage)
{
	this->hitPoints -= damage;
}

void Character::LevelUp()
{
	this->level++;
}

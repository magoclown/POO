#include "Character.h"

Character::Character()
{
#ifdef DEBUG
	cout << "CONSTRUCTOR" << endl;
#endif // DEBUG

	
}

Character::Character(int ID, int hitPoints, int mana, int level):ID(ID),hitPoints(hitPoints),level(level),mana(mana)
{
#ifdef DEBUG
	cout << "CONSTRUCTOR SOBECARGADO" << endl;
#endif
}

void Character::Walk(int steps)
{
#ifdef DEBUG
	cout << "Walk: " << steps << endl;
#endif
}

void Character::Damage(int damage)
{
#ifdef DEBUG
	cout << "Damage: " << damage << endl;
#endif
	this->hitPoints -= damage;
#ifdef DEBUG
	cout << "HitPoints: " << hitPoints << endl;
#endif
}

void Character::LevelUp()
{
	this->level++;
#ifdef DEBUG
	cout << "Level: " << level;
#endif
}

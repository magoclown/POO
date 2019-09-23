#include "Character.h"
using namespace std;

Character::Character() {
#ifdef DEBUG
	cout << "CLASE GENERADA" << endl;
#endif
#ifdef TEST
#endif
}

Character::Character(int hitPoints, float position, int status):status(status),hitPoints(hitPoints),position(position)
{
	
}

bool Character::IsAlive()
{
	return (this->hitPoints > 0);
}

int Character::GetStatus()
{
	return this->status;
}

void Character::Move(float position)
{
	this->position += position;
}





#include <iostream>
//#define DEBUG
using namespace std;
#pragma once
class Character
{
#pragma region VARIABLES PRIVADAS
	int ID{0};
	int hitPoints{0};
	int mana{0};
	int level{0};
#pragma endregion
public:
#pragma region CONSTRUCTORES
	Character();
	Character(int,int,int,int);
#pragma endregion
#pragma region METODOS
	void Walk(int);
	void Damage(int damage);
	void LevelUp();
#pragma endregion
};
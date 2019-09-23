#include<iostream>
using namespace std;
#define DEBUG
#pragma once
class Character
{
	int hitPoints{0};
	int size{0};
	int level{0};
	int strength{0};
	int race{0};
public:
	Character();
	Character(int, int, int, int, int);

	void Damage(int damage);
	void LevelUp();
};


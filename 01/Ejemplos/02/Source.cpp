#include <iostream>
#include <time.h>

using namespace std;

enum Dice
{
	D2 = 2,
	D4 = 4,
	D6 = 6,
	D8 = 8,
	D10 = 10,
	D12 = 12,
	D20 = 20,
	D100 = 100
};

enum typeRange
{
	range,
	melee
};

enum classCharacter
{
	None,
	Mage,
	Fighter
};

enum gender
{
	male,
	famale,
	other,
	uknown
};

struct Attack
{
	char m_name[50];
	Dice m_dice;

	Attack()
	{
	}

	Attack(char name[50], Dice dice)
	{
		strcpy_s(m_name, name);
		m_dice = dice;
	}

	int VerifyDiceValue()
	{
		return m_dice;
	}

	int ThrowDice()
	{
		srand(time(NULL));
		return (rand() % VerifyDiceValue()) + 1;
	}

	int ThrowDice(Dice dice)
	{
		srand(time(NULL));
		return (rand() % dice) + 1;
	}

	int CheckDefense()
	{
		srand(time(NULL));
		return (rand() % D20) + 1;
	}
};

struct Character
{
	char m_name[50];
	int m_hitPoints;//Vida
	int m_defense;

	Character()
	{}

	Character(char name[50], int hitPoints, int defense)
	{
		strcpy_s(m_name, name);
		m_hitPoints = hitPoints;
		m_defense = defense;
	}


};

struct Enemy
{
	char m_name[50];
	int m_hitPoints;//Vida
	int m_defense;

	Enemy()
	{}

	Enemy(char name[50], int hitPoints, int defense)
	{
		strcpy_s(m_name, name);
		m_hitPoints = hitPoints;
		m_defense = defense;
	}
};

void main()
{
	Dice dice = D6;
	Attack* atk = new Attack((char*)"Fire Ball", D10);
	
	Character* mainCharacter = new Character((char*)"Fredo Godofredo",14,10);
	Enemy* enemy01 = new Enemy((char*)"Lord Valdomero", 20, 5);
	cout << dice << endl;
	cout << atk->m_name << endl;

	cout << "DMG:" <<atk->ThrowDice() <<endl;
	cout << "Dice:" << atk->ThrowDice(D20) << endl;
	cout << "Defense:" << atk->CheckDefense() << endl;

	cout << "Characer:" << mainCharacter->m_name << endl;
	cout << "Enemy01:" << enemy01->m_name << endl;

	system("PAUSE");
	
	if(atk)
		delete atk;
	if (mainCharacter)
		delete mainCharacter;
	if (enemy01)
		delete enemy01;
}
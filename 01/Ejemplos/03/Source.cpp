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

enum Gender
{
	Male,
	Female,
	Other,
	Uknown
};

struct Attack
{
	char m_name[50];
	Dice m_diceDamage;

	Attack(){}

	Attack(char name[50], Dice diceDamage)
	{
		strcpy_s(m_name, name);
		//m_name = name;
		m_diceDamage = diceDamage;
	}

	int VerifyDiceValue()
	{
		return m_diceDamage;
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

	int VerifyDefense()
	{
		srand(time(NULL));
		return ThrowDice(D20);
	}
};

struct Character
{
	char m_name[50];
	int m_hitPoints;//Vida
	int m_level;
	int m_defense;
	Gender m_gender;

	Character()
	{
	}

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
	int m_level;
	int m_defense;

	Enemy()
	{
	}

	Enemy(char name[50], int hitPoints, int defense)
	{
		strcpy_s(m_name, name);
		m_hitPoints = hitPoints;
		m_defense = defense;
	}
	void TakeDamage(int damage)
	{
		m_hitPoints -= damage;
	}
	void PrintHealth()
	{
		cout << "Enemy HP:" << m_hitPoints << endl;
	}
};


void main()
{
	Dice dice = D20;

	Attack* atk = new Attack((char*)"Puñetazo", D10);
	Character* mainCharacter = new Character((char*)"Panchita", 100, 10);
	Enemy* enemy01 = new Enemy((char*)"Masiosare", 2000, 2);
	//Attack* atk02 = new Attack();
	cout << dice << endl;
	cout << atk->m_name << endl;

	cout << "Character:" << mainCharacter->m_name << endl;
	cout << "Enemy:" << enemy01->m_name << endl;
	enemy01->PrintHealth();

	int dmg = atk->ThrowDice();
	cout << "ATK:" << dmg << endl;
	cout << "FLIP:" << atk->ThrowDice(D2) << endl;
	cout << "DEFENSE:" << atk->VerifyDefense() << endl;

	enemy01->TakeDamage(dmg);

	enemy01->PrintHealth();

	system("PAUSE");

	if(atk)
		delete atk;
}
#include <iostream>
using namespace std;

struct Vector2
{
	float x;
	float y;
};

struct Vector3
{
	float x;
	float y;
	float z;
};

struct Character
{
	char name[50];
	float position;
	bool isAlive;

	Character()
	{
	}

	Character(char name[50], float position)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->isAlive = true;
	}

	Character(char name[50], float position, bool isAlive)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->isAlive = isAlive;
	}

	int Stepts(int steps)
	{
		this->position += steps;
		//this->position = this->position + steps;
		return this->position;
	}

	void Death()
	{
		isAlive = false;
		cout << "F" << endl;
		cout << "Personaje: " << name << " murio" << endl;
	}
};

struct Enemy {
	char name[50];
	float position;
	float range;
	bool isAlive;

	Enemy() {}
	Enemy(char name[50], float position, float range)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->range = range;
		this->isAlive = true;
	}
	Enemy(char name[50], float position, float range, bool isAlive)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->range = range;
		this->isAlive = isAlive;
	}

	void Steps(int steps)
	{
		this->position += steps;
	}

	void IsInRange(float steps, Character *mainCharacter)
	{
		int distance = abs(mainCharacter->position - this->position);
		int absStep = abs(steps);
		//? range
		if (distance <= range)
		{
			if (mainCharacter->position < this->position)
				Steps(absStep * -1);
			else if (mainCharacter->position > this->position)
				Steps(absStep);
			else
				mainCharacter->Death();
		}
		cout <<"Position de" << name << ": "<< this->position << endl;
	}
};

void main() 
{
	//Character mainCharacter = Character((char*)"Eduardo Juan", 5);
	Character* mainCharacter = new Character((char*)"Eduardo Juan", 5);
	Enemy* mainEnemy = new Enemy((char*)"Jaffar",20,5);
	cout << "Personaje: " << mainCharacter->name << endl;;
	cout << "Enemigo: " << mainEnemy->name << endl;
	int steps;
	while (mainCharacter->isAlive)
	{
		cout << "Cuantos pasos deseas caminar:";
		cin >> steps;
		mainEnemy->IsInRange(steps, mainCharacter);
		cout << "Te encuentras en la posicion:" << mainCharacter->Stepts(steps) << endl;
	}
	
	system("PAUSE");
	if (mainCharacter)
		delete mainCharacter;
	if (mainEnemy)
		delete mainEnemy;
}

/*
#include <iostream>
using namespace std;
/*
namespace Primitivos
{
	namespace Pyramids
	{
		void CreateQuad()
		{
			cout << "Create Quad Pyramids" << endl;
		}
	}
	void CreateQuad()
	{
		cout << "Create Quad Primitivos" << endl;
	}
}
void CreateQuad()
{
	cout << "Create Quad" << endl;
}
*/
/*
namespace Calculos
{
	struct Vector3
	{
		float x;
		float y;
		float z;

		Vector3()
		{}

		Vector3(float x, float y, float z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		Vector3 Suma(Vector3 a, Vector3 b)
		{
			a.x += b.x;
			a.y += b.y;
			a.z += b.z;
			return a;
		}

		Vector3 Suma(Vector3 *a, Vector3 *b)
		{
			a->x += b->x;
			a->y += b->y;
			a->z += b->z;
			return *a;
		}

		void Suma(Vector3 &a, Vector3 b)
		{
			a.x += b.x;
			a.y += b.y;
			a.z += b.z;
		}
	};

	
}
using namespace Calculos;
void main()
{
	//CreateQuad();
	Vector3 *vec = new Vector3(5,5,5);
	Vector3* vec2 = new Vector3(3, 3, 3);

	Vector3 res = res.Suma(vec, vec2);

	cout << "Res" << res.x << res.y << res.z << endl;
	cout << "Vec" << vec->x << vec->y << vec->z << endl;
	cout << "Vec2" << vec2->x << vec2->y << vec2->z << endl;

	system("pause");
}
*/


/*
#include <iostream>

using namespace std;

namespace Primitivos
{
	namespace Pyramids
	{
		void QuadBase()
		{
			cout << "Create Quad Pyramid Pyramids" << endl;
		}
	}

	void CreateBox()
	{
		cout << "Create Box" << endl;
	}
}

namespace Vectores
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
	};

	Vector3 Suma(Vector3 a, Vector3 b)
	{
		a.x += b.x;
		a.y += b.y;
		a.z += b.z;
		return a;
	}

	Vector3 Suma(Vector3 *a, Vector3 *b)
	{
		Vector3 result;
		result.x = a->x + b->x;
		result.y = a->y + b->y;
		result.z = a->z + b->z;
		return result;
	}

	void Suma(Vector3 &a, Vector3 b)
	{
		a.x += b.x;
		a.y += b.y;
		a.z += b.z;
	}
}

using namespace Primitivos;
using namespace Vectores;
void main()
{
	//Pyramids::QuadBase();
	//CreateBox();

	Vector3 *vec = new Vector3(5, 5, 5);
	Vector3* vec2 = new Vector3(3,3,3);

	Vector3 result = Suma(vec, vec2);

	cout << "Result: " << result.x << result.y << result.z <<endl;
	cout << "Vec: " << vec->x << vec->y << vec->z << endl;
	cout << "Vec2: " << vec2->x << vec2->y << vec2->z << endl;

	if (vec)
		delete vec;
	if (vec2)
		delete vec2;
	system("PAUSE");
}
*/

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

struct Enemy {
	char name[50];
	float position;
	bool isAlive;

	Enemy() {};

	Enemy(char name[50], float position)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->isAlive = true;
	}

	Enemy(char name[50], float position, bool isAlive)
	{
		strcpy_s(this->name, name);
		this->position = position;
		this->isAlive = isAlive;
	}
};

struct Character {
	char name[50];
	float position;
	bool isAlive;

	Character() {}

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
	Character ReturnChar()
	{
		return Character((char*)"Joe",5);
	}

	void Destroy()
	{
		delete this;
	}

	int Steps(int steps)
	{
		this->position += steps;
		return this->position;
	}
};

void main()
{
	//Character mP = Character((char*)"Manuel",10);
	//Character test = test.ReturnChar();
	Character* mainPlayer = new Character((char*)"Jose",52);
	Enemy* mainEnemy = new Enemy((char*)"Rosas", 7);

	int steps = 0;
	cout << "Ahora se encuentra en:" << mainPlayer->position<<endl;
	while (mainPlayer->position != mainEnemy->position)
	{
		cout << "Cuantos pasos desea caminar: ";
		cin >> steps;
		cout << "Ahora se encuentra en:" << mainPlayer->Steps(steps) << endl;
	}

	mainPlayer->Destroy();
	/*
	if (mainPlayer)
		delete mainPlayer;
		*/
	if (mainEnemy)
		delete mainEnemy;
}






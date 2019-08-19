#include <iostream>
using namespace std;

struct Character
{
	float position;
	bool isAlive;

	Character()
	{}

	Character(float position)
	{
		this->position = position;
		this->isAlive = true;
	}
	Character(float position, bool isAlive)
	{
		this->position = position;
		this->isAlive = isAlive;
	}

	Character ReturnDefault()
	{
		return Character(0);
	}

	int Steps(int steps)
	{
		this->position += steps;
		return this->position;
	}

	void Death()
	{
		isAlive = false;
		cout << "YOU DIE!" << endl;
	}
};
struct Enemy {
	float position;
	bool isAlive;
	int range;

	Enemy()
	{}

	Enemy(float position, int range)
	{
		this->position = position;
		this->range = range;
		this->isAlive = true;
	}

	Enemy(float position)
	{
		this->position = position;
		this->isAlive = true;
	}
	Enemy(float position, bool isAlive)
	{
		this->position = position;
		this->isAlive = isAlive;
	}
	void Step(int step)
	{
		position += step;
	}
	//E -> Position, Range
	//C -> Character
	void IsInRange(Character *mainCharacter, int step)
	{
		int magnitud = mainCharacter->position - this->position;
		int distance = abs(magnitud);
		int absStep = abs(step);
		if (distance <= range)
		{
			if (distance == 0)
				mainCharacter->Death();
			else if (magnitud < 0)
				Step(absStep * -1);
			else
				Step(absStep);
		}
		cout << "Posicion Enemigo: " << position << endl;
	}
};
void main()
{
	//Character otherChar = otherChar.ReturnDefault();
	Character* mainCharacter = new Character(10);
	Enemy* mainEnemy = new Enemy(0,5);

	int step;
	while (mainCharacter->isAlive)
	{
		cout << "Cuantos pasos daras:";
		cin >> step;
		mainEnemy->IsInRange(mainCharacter, step);
		cout << "Ahora estas en: " << mainCharacter->Steps(step) << endl;
	}

	if (mainCharacter)
		delete mainCharacter;
	if (mainEnemy)
		delete mainEnemy;
}

/*
#include <iostream>
/*
using std::string;
void main()
{
	string str = "Example";
	std::cout << str << std::endl;
	using std::cout;
	string str2 = "Test";
	using std::endl;
	cout << str2 << endl;
	system("PAUSE");
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
		{
			x = 0;
			y = 0;
			z = 0;
		}

		Vector3(float x, float y, float z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		Vector3(float x)
		{
			this->x = x;
			this->y = x;
			this->z = x;
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
		return Vector3(a->x + b->x, a->y + b->y, a->z + b->z);
	}
	void Suma(Vector3 &a, Vector3 b)
	{
		a.x += b.x;
		a.y += b.y;
		a.z += b.z;
	}
}

using namespace std;
using namespace Calculos;
void main()
{
	Vector3 *vec = new Vector3(5);
	Vector3* vec2 = new Vector3(3);

	Vector3	res = Suma(vec, vec2);
	Vector3 res2 = Vector3(910);

	cout << "Res" << res.x << res.y << res.z << endl;
	cout << "Res2" << res2.x << res2.y << res2.z << endl;
	cout << "Vec" << vec->x << vec->y << vec->z << endl;
	cout << "Vec2" << vec2->x << vec2->y << vec2->z << endl;

	system("pause");
	if (vec)
		delete vec;
	if (vec2)
		delete vec2;
}
*/
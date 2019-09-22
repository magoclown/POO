#include "Character.h"
#define DEBUG
#define V2

#ifdef V2

void main()
{
	Character character;
#ifdef DEBUG
	cout << "HOLA" << endl;
#endif
	system("PAUSE");
}

#else
#define MASTER_DEBUG
#ifdef MASTER_DEBUG
#define DEBUG
#endif

void main()
{
	int a = 0;
	cin >> a;
#ifdef DEBUG
	cout << a << endl;
#endif
	system("PAUSE");
}
#endif
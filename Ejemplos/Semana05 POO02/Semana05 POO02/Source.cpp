#include <iostream>
#include "Character.h"
using namespace std;
#define PART2


#ifdef PART2

void main()
{
	Character *character = new Character();
	system("PAUSE");
}

#else
#define DEBUG



void main()
{
	int a = 0;
	cin >> a;
#ifdef DEBUG
	cout << a << endl;
	ñiafghdfaligdfgiojd
#endif

	system("PAUSE");

}
#endif
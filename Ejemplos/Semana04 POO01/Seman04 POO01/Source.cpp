#define DEBUG
#include "Character.h"
using namespace std;

void main()
{
	Character character;
	//cout << character.IsAlive() << endl;
	system("PAUSE");
}









/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
#pragma region DEFINES
#define DEBUG 
#define ERROR
#pragma endregion

#pragma region DEBUG FUNCTIONS
void DebugLog(char text[_MAX_PATH])
{
#ifdef DEBUG
	cout << endl << "DEBUG: " << text << endl;
#endif // DEBUG	
}
#pragma endregion

void main()
{
	int a = 0;
	int b = 0;
	char val[5];
	char val2[5];
	cout << "Ingrese el numero:" << endl;
	cin >> a;
	
	_itoa(a, val, 10);
	DebugLog(val);
	cout << "Ingrese el numero:" << endl;
	cin >> b;

	_itoa(b, val2, 10);
	DebugLog(val2);
	int c = a + b;
	cout << "El resultado es: " << c << endl;
#ifndef ERROR
	val2 = c;
#endif



	system("PAUSE");
}
*/
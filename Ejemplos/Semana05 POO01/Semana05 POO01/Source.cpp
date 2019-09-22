#include<iostream>
#include "Vector3.h"
using namespace std;

//#define EX1

void main() {
#ifdef EX1
	Vector3 vec1(3, 5, 2);
	Vector3 vec2(2, 4, 6);

	Vector3 res = vec1 + vec2;
#else
	Vector3 vec1, vec2, res;
	cout << "Ingrese el vector3" << endl;
	cin >> vec1;
	cout << "Ingrese el vector3" << endl;
	cin >> vec2;
	res = vec1 + vec2;
	//res *= 3;
	//res = vec1 * vec2;
#endif
	cout << vec1 << endl;
	cout << vec2 << endl;
	cout << res << endl;

	system("pause");
}
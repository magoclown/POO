#include<vector>
#include <list>
#include<iostream>
#include <stdio.h>
using namespace std;
#define List
void ClearPause() {
	system("pause");
	system("cls");
}
#ifdef List
int main()
{
	using namespace std;
	list <int> c1;
	list <int>::iterator c1_Iter;

	c1.push_back(20);
	c1.push_back(10);
	c1.push_back(30);

	cout << "Before sorting: c1 =";
	for (c1_Iter = c1.begin(); c1_Iter != c1.end(); c1_Iter++)
		cout << " " << *c1_Iter;
	cout << endl;

	c1.sort();
	cout << "After sorting c1 =";
	for (c1_Iter = c1.begin(); c1_Iter != c1.end(); c1_Iter++)
		cout << " " << *c1_Iter;
	cout << endl;

	c1.sort(greater<int>());
	cout << "After sorting with 'greater than' operation, c1 =";
	for (c1_Iter = c1.begin(); c1_Iter != c1.end(); c1_Iter++)
		cout << " " << *c1_Iter;
	cout << endl;
}
#else
#pragma region vector
void main() {
	vector<int> calfs;
	//Agregar elementos al final
	calfs.push_back(100);
	calfs.push_back(70);
	calfs.push_back(80);
	calfs.push_back(85);

	

	cout << "Tamaño maximo: " << calfs.max_size() << "." << endl;

	ClearPause();
	//Imprimir posiciones especificas
	cout << "Primer elemento: " << *calfs.begin() << endl;
	cout << "Ultimo elemento: " << *(calfs.end()-1) << endl;
	cout << "Segundo Elemento: " << calfs.at(1) << endl;
	ClearPause();
	//Range-based for
	cout << "Calificaciones con for Range-based y sumando 5: " << endl;
	for (auto calf : calfs) {
		calf += 5;
		cout << calf << endl;
	}
	ClearPause();
	//for con un iterator
	cout << "Calificaciones con for e iterator: " << endl;
	vector<int>::iterator iter;
	for (iter = calfs.begin(); iter != calfs.end(); iter++) {
		cout << *iter << endl;
	}
	ClearPause();
	//for con el tamaño
	cout << "Calificaciones con for: " << endl;
	for (int i = 0; i < calfs.size(); i++) {
		cout << calfs.at(i) << endl;
	}
	ClearPause();
	//Remover el ultimo
	calfs.pop_back();
	calfs.pop_back();
	cout << "Calificaciones sin los ultimos dos: " << endl;
	for (int calf : calfs) {
		calf += 5;
		cout << calf << endl;
	}
	
	calfs.push_back(100);
	calfs.push_back(70);
	calfs.push_back(80);

	ClearPause();

	calfs.erase(calfs.begin() + 2);
	cout << "Despues de remover posicion 3: " << endl;
	cout << "Calificaciones: " << endl;
	for (int calf : calfs) {
		calf += 5;
		cout << calf << endl;
	}

	ClearPause();

	cout << "Peso: " << sizeof(calfs) << endl;
	cout << "Peso: " << sizeof(calfs) << endl;
	calfs.clear();
	cout << "Peso: " << sizeof(calfs) << endl;
	
	ClearPause();


	cout << "Calificaciones despues de clear: " << endl;
	for (int calf : calfs) {
		calf += 5;
		cout << calf << endl;
	}

	ClearPause();

}
#pragma endregion
#endif
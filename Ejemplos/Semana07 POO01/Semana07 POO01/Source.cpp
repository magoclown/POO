#include <iostream>
using namespace std;

template<typename T> class List {
private:
	T value;
public:
	T object;
	//int value;

	T Retorno() {
		return object;
	}

	void SetValue(T value) {
		this->value = value;
	}

	T& GetValue() {
		return this->value;
	}
};

class Objeto {
public:
	int a{0};
	int b{0};
};

class Hero {
private:
	int fuerza;
	int defensa;
	int habilidad;
	int sanidad;
public:

	Hero() {}
	Hero(int fuerza, int defensa, 
		int habilidad, int sanidad) :fuerza(fuerza), sanidad(sanidad), defensa(defensa), habilidad(habilidad) {
	}

	void SetFuerza(int fuerza) {
		this->fuerza = fuerza;
	}

	/*int GetFuerza() {
		return this->fuerza;
	}*/

	int GetFuerza(int fuerza = 10) {
		this->fuerza += fuerza;

		return this->fuerza;
	}
};

void main() {
	List<int> lista;
	List<Objeto> objetos;
	List<Hero> heroes;

	Objeto objeto;
	objeto.a = 3;
	objeto.b = 6;

	lista.SetValue(5);
	objetos.SetValue(objeto);
	
	heroes.SetValue(Hero(9001, 50, 10, 0));

	cout << lista.GetValue() << endl;
	cout << objetos.GetValue().a << endl;
	cout << heroes.GetValue().GetFuerza() << endl;//9006
	cout << heroes.GetValue().GetFuerza(5) << endl;//9006#undefined
	cout << heroes.GetValue().GetFuerza() << endl;//9006
	system("PAUSE");
}


//template<typename T, typename S> S Suma(T a, S b) {
//	return a + b;
//}
//
//void main() {
//	Objecto a,b;
//	Suma(a, b);
//	cout << Suma('a', 'H') << endl;
//	cout << Suma(true,false) << endl;
//	cout << Suma<bool, double>(true, 5.3) << endl;
//	cout << Suma<bool, int>(false, 4.5) << endl;
//	system("pause");
//}
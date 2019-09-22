#include<iostream>
using namespace std;

template<class T, class R> class Base {
public:
	T a;
	R b;
};

template<class T, template<class, class> class R> 
class Vec {
public:
	T a;
	R b;
};

template<typename T> class List {
private:
	T value;
public:
	T object;

	void SetValue(T value) {
		this->value = value;
	}

	T& GetValue() {
		return value;
	}
};

class Objeto {
public:
	int a;
	int b;
};

class Hero {
private:
	string name{ string("HeroMan") };
	int fuerza{0};
	int vida{ 0 };
	int defensa{ 0 };
	bool capa{ false };
public:
	Hero() {}
	Hero(string name, int fuerza,
		int vida, int defensa,
		bool capa) : name(name), fuerza(fuerza),
		vida(vida), defensa(defensa), capa(capa) {
	}
	
	void SetName(string name) {
		this->name = name;
	}

	string GetName() {
		return name;
	}

	void SetFuerza(int fuerza) {
		this->fuerza = fuerza;
	}
	void SetStatus(int fuerza, int vida = 15, int defensa = 5) {
		this->fuerza = fuerza;
		this->vida = vida;
		this->defensa = defensa;
	}
	/*int GetFuerza() {
		return fuerza;
	}*/

	int GetFuerza(int fuerza = 0) {
		//this->fuerza += fuerza;
		//this->fuerza = this->fuerza + fuerza;
		//return (this->fuerza);
		return (this->fuerza += fuerza);
	}
};

void main() {
	Vec<Objeto, Base> vec;

	Base<int, string> base;

	List<Hero> heroes;
	heroes.SetValue(Hero(string("Paco"),14,10,1800,false));

	heroes.GetValue().SetStatus(5);

	//cout << heroes.GetValue().GetName() << endl;
	cout << heroes.GetValue().GetFuerza() << endl;//14
	cout << heroes.GetValue().GetFuerza(5) << endl;//19
	cout << heroes.GetValue().GetFuerza() << endl;//19

	List<Objeto> objetos;
	Objeto objeto;
	objeto.a = 5;
	objeto.b = 10;
	objetos.SetValue(objeto);
	//cout << objetos.GetValue().a << endl;
	//cout << objetos.GetValue().b << endl;

	List<int> list;
	list.SetValue(8);

	//cout << list.GetValue() << endl;
	
	system("PAUSE");
}


////#include<iostream>
////using namespace std;
////
////class Maths {
////private:
////	int a{ 0 };
////	int b{ 0 };
////public:	
////	Maths(int a, int b) :a(a), b(b) {}
////
////	static int Division(int a, int b) {
////		if (b == 0)
////			throw "Divide by 0 Condition";
////		return (a / b);
////	}
////};
////
////void main() {
////	Maths math{ 10,0 };
////	int c = 0;
////	try {
////		c = math.Division(math.a, math.b);
////	}
////	catch (const char* msg) {
////		cerr << msg << endl;
////	}
////	catch (...) {
////		cerr << "Error inesperado" << endl;
////	}
////	system("pause");
////}
//
//#include <iostream>
//using namespace std;
//
//template<typename T, typename S, typename R> R Suma(T a, S b) {
//	return a + b;
//}
//template<typename T, typename S, typename R> R Resta(T a, S b) {
//	return a - b;
//}
//void main() {
//	cout << Suma<char,char,char>('a', 'H') << endl;
//	cout << Suma<char, char, int>('a', 'H') << endl;
//	cout << Resta<char, int, char>('h', 32) << endl;
//	cout << Resta<char, char, int>('a', 'A') << endl;
//	/*cout << Suma<char, int, char>('a', 32) << endl;
//	cout << Suma<int, char, char>(32, 'a') << endl;
//	cout << Suma<int, double, char>(5, 6.4) << endl;
//	cout << Suma<double, int, char>(6.4, 5) << endl;
//	cout << Suma<bool, int, char>(true, 10) << endl;
//	cout << Suma<bool, bool, char>(true, false) << endl;*/
//	system("pause");
//}
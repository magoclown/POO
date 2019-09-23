#include <iostream>
using namespace std;

template<typename T, typename R> class Base {
public:
	T a;
	R b;
};

template<typename T, template<typename, typename> class R> class Vec {
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
	Objeto() {}
	Objeto(int a, int b) :a(a), b(b) {};
};

class Hero {
private:
	string identidadSecreta{ string("???") };
	int poder{0};
	int mapa{0};
	bool botas{0};
	bool capa{0};
	string debilidad{string("Nada")};
public:
	Hero() {};
	Hero(string identidadSecreta, int poder,
		int mapa, bool botas, 
		bool capa, string debilidad):identidadSecreta(identidadSecreta), poder(poder) , 
		mapa(mapa), botas(botas), capa(capa),
	debilidad(debilidad){
	}

	void SetPoder(int poder) {
		this->poder = poder;
	}

	/*int GetPoder() {
		return poder;
	}*/

	int GetPoder(int poder = 0) {
		return (this->poder += poder);
	}
};

void main() {
	Vec<Hero, Base> vector;


	List<Hero> heroes;
	heroes.SetValue(Hero(string("Norberto"),9001,50,false,true,string("Proyectos finales")));
	
	List<Objeto> objetos;
	Objeto objeto{ 11,20 };
	objetos.SetValue(objeto);
	
	List<int> lista;
	lista.SetValue(12);
	
	cout << heroes.GetValue().GetPoder() << endl;
	cout << heroes.GetValue().GetPoder(5) << endl;
	cout << heroes.GetValue().GetPoder() << endl;
	/*cout << lista.GetValue() << endl;
	cout << objetos.GetValue().a << endl;*/

	system("PAUSE");
}

////#include<iostream>
////using namespace std;
////
////class Maths {
////private:
////	int m_a{ 0 };
////	int m_b{ 0 };
////public:
////	Maths(int a, int b) :m_a(a), m_b(b) {}
////	//Getter
////	int a() {
////		return m_a;
////	}
////	int b() {
////		return m_b;
////	}
////	int area() {
////		return m_a * m_b;
////	}
////	//Setter
////	void a(int a) {
////		m_a = a;
////	}
////	void b(int b) {
////		m_b = b;
////	}
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
////		c = Maths::Division(math.a, math.b);
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
//template<typename T, typename S> T Suma(T a, S b) {
//	return a + b;
//}
//
//void main() {
//	cout << Suma('a', 'H') << endl;
//	cout << Suma('a', 16) << endl;
//	cout << Suma(15, 'a') << endl;
//	cout << Suma(5, 6.6) << endl;
//	cout << Suma(5.6, 6.6) << endl;
//	cout << Suma(true, false) << endl;
//
//	system("PAUSE");
//}
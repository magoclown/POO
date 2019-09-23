#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
class Persona {
public:
	Persona(const char* n) { 
		strcpy_s(nombre, n); 
	}
	virtual void VerNombre() {
		cout << nombre << endl;
	}
protected:
	char nombre[30];
};

class Empleado : public Persona {
public:
	Empleado(const char* n) : Persona(n) {}
	void VerNombre() {
		cout << "Emp: " << nombre << endl;
	}
};


class Estudiante : public Persona {
public:
	Estudiante(const char* n) : Persona(n) {}
	void VerNombre() {
		cout << "Est: " << nombre << endl;
	}
};

void main() {
	Estudiante Pepito("Jose");
	Empleado Carlos("Carlos");





	Persona* rPepe = new Estudiante("Jose"); // puntero como Persona
	Persona& rCarlos = Carlos; // Referencia como Persona
	






	rCarlos.VerNombre();
	//Emp: Carlos
	rPepe->VerNombre();
	//Est: Jose


	system("pause");
	delete rPepe;
}

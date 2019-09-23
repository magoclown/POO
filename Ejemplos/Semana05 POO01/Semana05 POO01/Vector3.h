#pragma once
#include <iostream>
class Vector3
{
public:
	float x{0};
	float y{0};
	float z{0};

	Vector3();
	Vector3(float x, float y, float z);

#pragma region Operator Overloading
	/*
	Igualacion
	*/
	Vector3& operator=(const Vector3& other);
	/*
	Multiplicacion e Igualacion con un entero
	*/
	Vector3& operator*=(const int& other);
	/*
	Producto cruz e Igualacion
	*/
	Vector3& operator*=(const Vector3& other);
	/*
	Suma
	*/
	Vector3 operator+(Vector3 other);
	/*
	Resta
	*/
	Vector3 operator-(Vector3& other);
	/*
	Multiplicacion
	*/
	Vector3 operator*(int& other);
	/*
	Producto Cruz
	*/
	Vector3 operator*(Vector3& other);
	/*
	Comparacion de igualdad
	*/
	bool operator==(const Vector3& other);
	/*
	Comparacion de desigualdad
	*/
	bool operator!=(const Vector3& other);
	/*
	Imprimir en pantalla con uso de cout
	*/
	friend std::ostream& operator<<(std::ostream& os, 
		const Vector3& other);
	/*
	Obtener valor con uso de cin
	*/
	friend std::istream& operator>>(std::istream& is, 
		Vector3& other);
#pragma endregion
};


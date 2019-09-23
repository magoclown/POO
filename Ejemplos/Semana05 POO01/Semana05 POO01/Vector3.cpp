#include "Vector3.h"

Vector3::Vector3()
{
}

Vector3::Vector3(float x, float y, float z):x(x),y(y),z(z)
{
}

Vector3& Vector3::operator=(const Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	x = other.x;
	y = other.y;
	z = other.z;

	return *this;
}

Vector3& Vector3::operator*=(const int& other)
{
	// TODO: insertar una instrucción return aquí

	x *= other;
	y *= other;
	z *= other;
	return *this;
}

Vector3& Vector3::operator*=(const Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	Vector3 temp;
	temp.x = y * other.z - z * other.y;
	temp.y = z * other.x - x * other.z;
	temp.z = x * other.y - y * other.x;
	x = temp.x;
	y = temp.y;
	z = temp.z;
	return *this;
}

Vector3 Vector3::operator+(Vector3 other)
{
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(int& other)
{
	// TODO: insertar una instrucción return aquí
	
	return Vector3(x * other, y * other, z * other);;
}

Vector3 Vector3::operator*(Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	Vector3 temp;
	temp.x = y * other.z - z * other.y;
	temp.y = z * other.x - x * other.z;
	temp.z = x * other.y - y * other.x;
	return temp;
}

bool Vector3::operator==(const Vector3& other)
{
	return (x == other.x && y == other.y && z == other.z);
}

bool Vector3::operator!=(const Vector3& other)
{
	return (x != other.x && y != other.y && z != other.z);
}

std::ostream& operator<<(std::ostream& os, const Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	os << "Vector3(" << other.x << "," << other.y << "," << other.z << ")";
	return os;
}

std::istream& operator>>(std::istream& is, Vector3& other)
{
	// TODO: insertar una instrucción return aquí
	std::cout << "x:";
	is >> other.x;
	std::cout << "y:";
	is >> other.y;
	std::cout << "z:";
	is >> other.z;
	return is;
}

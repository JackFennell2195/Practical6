#include "Vector3.h"

double Vector3::getX()
{
	return x;
}

void Vector3::setX(double value)
{
	x = value;
}

double Vector3::getY()
{
	return y;
}

void Vector3::setY(double value)
{
	y = value;
}

double Vector3::getZ()
{
	return z;
}

void Vector3::setZ(double value)
{
	z = value;
}

Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector3::Vector3(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}

Vector3::Vector3(Vector3 * V)
{
	x = V->x;
	y = V->y;
	z = V->z;

}

double Vector3::length()
{
	return (double)sqrt(x * x + y * y + z * z);
}

double Vector3::lengthSquared()
{
	// A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void Vector3::normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (length() > 0.0)
	{  // Check for divide by zero
		double magnit = length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

Vector3 Vector3::operator+(Vector3 V1)
{
	return Vector3();
}

Vector3 Vector3::operator-(Vector3 V)
{
	return Vector3();
}

Vector3 Vector3::operator-()
{
	return Vector3();
}

double Vector3::operator*(Vector3 V1)
{
	return 0.0;
}

Vector3 Vector3::operator*(double k)
{
	return Vector3();
}

Vector3 Vector3::operator*(float k)
{
	return Vector3();
}

Vector3 Vector3::operator*(int k)
{
	return Vector3();
}

Vector3 Vector3::operator^(Vector3 V1)
{
	return Vector3();
}

std::string Vector3::toString()
{
	return std::string();
}

#include "Vector3.h"
#include <cmath>

// Constructors
Vector3::Vector3()
{
    this->x = 0;
    this->x = 0;
    this->x = 0;
}

Vector3::Vector3(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

// Setters
Vector3 &Vector3::withX(double x)
{
    this->x = x;
    return *this;
}

Vector3 &Vector3::withY(double y)
{
    this->y = y;
    return *this;
}

Vector3 &Vector3::withZ(double z)
{
    this->z = z;
    return *this;
}

// Getters
double Vector3::getX() const
{
    return this->x;
}

double Vector3::getY() const
{
    return this->y;
}

double Vector3::getZ() const
{
    return this->z;
}

// Methods
double Vector3::magnitude() const
{
    return sqrt(std::pow(this->x, 2) + std::pow(this->y, 2) + std::pow(this->z, 2));
}

double Vector3::dot(Vector3 &other) const
{
    return this->x * other.getX() + this->y * other.getY() + this->z * other.getZ();
}

Vector3 &Vector3::add(Vector3 &other)
{
    this->x += other.getX();
    this->y += other.getY();
    this->z += other.getZ();
    return *this;
}

Vector3 &Vector3::subtract(Vector3 &other)
{
    this->x -= other.getX();
    this->y -= other.getY();
    this->z -= other.getZ();
    return *this;
}

Vector3 &Vector3::scale(double scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

Vector3 &Vector3::normalize()
{
    double magnitude = this->magnitude();
    this->x /= magnitude;
    this->y /= magnitude;
    this->z /= magnitude;
    return *this;
}

Vector3 Vector3::cross(Vector3 &other)
{
    return Vector3()
        .withX(this->y * other.getZ() - this->z * other.getY())
        .withY(this->z * other.getX() - this->x * other.getZ())
        .withZ(this->x * other.getY() - this->y * other.getX());
}
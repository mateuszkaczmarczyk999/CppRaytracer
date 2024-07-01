#ifndef VECTOR3_H
#define VECTOR3_H

// #include <iostream>

class Vector3 {
public:
    // Constructors
    Vector3();
    Vector3(double x, double y, double z);

    // Setters
    Vector3& withX(double x);
    Vector3& withY(double y);
    Vector3& withZ(double z);

    // Getters
    double getX() const;
    double getY() const;
    double getZ() const;

    // Methods
    double magnitude() const;
    double dot(Vector3& other) const;
    Vector3& add(Vector3& other);
    Vector3& subtract(Vector3& other);
    Vector3& scale(double scalar);
    Vector3& normalize();
    Vector3 cross(Vector3& other);

private:
    double x, y, z;
};

#endif
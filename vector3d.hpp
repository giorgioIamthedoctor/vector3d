#ifndef VECTOR3D_H

#define VECTOR3D_H
#include <ostream>


class vector3d {

public:

    double x,y,z;

    const static vector3d X;

    const static vector3d Y;

    const static vector3d Z;

    const static vector3d ZERO;

    vector3d(double x,double y,double z);

    vector3d();

    double get_x() const;

    double get_y() const;

    double get_z() const;

    vector3d operator+(const vector3d other) const;

    vector3d operator-() const;

    vector3d operator-(const vector3d other) const;

    vector3d operator^(const vector3d other) const;

    bool operator==(const vector3d other) const;

    bool operator!=(const vector3d other) const;

    double operator*(const vector3d other) const;

    vector3d operator^(const vector3d other) const;
    vector3d operator*(const double n) const;
    double length() const;
    vector3d normalize() const;
};


// TODO: дописать


#endif

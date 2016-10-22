#include "vector3d.hpp"


#include <cmath>


const vector3d vector3d::X = {1, 0, 0};

const vector3d vector3d::Y = {0, 1, 0};

const vector3d vector3d::Z = {0, 0, 1};

const vector3d vector3d::ZERO = {0, 0, 0};


vector3d::vector3d(double _x, double _y, double _z) {
    x = _x;
    y = _y;
    z = _z;}


vector3d::vector3d(){
    x = 0;
    y = 0;
    z = 0;
}


vector3d vector3d::operator+(const vector3d other)const {
    
    return vector3d(x+other.x,y+other.y,z+other.z);

}


vector3d vector3d::operator-()const {
        
    return vector3d(x*(-1),y*(-1),z*(-1));

}


vector3d vector3d::operator-(const vector3d other)const {
    
    return operator+(other.operator-());

}


bool vector3d::operator==(const vector3d other) const {
    
    if(x == other.x && y == other.y && z == other.z) {
       
        return true;
    
    }
    
    return false;

}

bool vector3d::operator!=(const vector3d other) const {

    if(x != other.x or y != other.y or z != other.z){

        return true;

    }

    return false;
}


double vector3d::operator*(const vector3d other) const {

    return (x*other.x+y*other.y+z*other.z);

}

vector3d vector3d::operator^(const vector3d other) const{

    return vector3d(y*other.z-z*other.y,z*other.x-x*other.z,x*other.y-y*other.x);

}
vector3d vector3d::operator*(const double n) const{
    return vector3d(n*x,n*y,n*z);
}
vector3d operator*(const double n,const vector3d b) const{
    return b*n;
}
double vector3d::length() const{
    return (std::sqrt(x*x+y*y+z*z));
}
vector3d vector3d::normalize() const{
    return (operator*(1/length));
}
std::ostream & operator<<(std::ostream &stream, const vector3d a) {
        return stream << "{" << a.x << ", " << a.y << ", " << a.z << "}";
}

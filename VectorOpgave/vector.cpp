#include "vector.h"
using namespace std;

Vector::Vector(){
Vector::_x = 0;
Vector::_y = 0;
Vector::_z = 0;
}

Vector::Vector(double x, double y, double z)
{
    Vector::_x = x;
    Vector::_y = y;
    Vector::_z = z;
    cout << "A vector has been created"
}

Vector::get(int i)
{
}

void Vector::set(int i, double val)
{

}

double Vector::inner_product(Vector v);

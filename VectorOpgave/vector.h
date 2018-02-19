#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
public:
    Vector();
    Vector(double x, double y, double z);

    double get(int i);
    void set(int i, double val);

    double inner_product(Vector v);

private:
    double x;
    double y;
    double z;
};

#endif // VECTOR_H

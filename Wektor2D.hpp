#include <stdio.h>


class Wektor2D
{
public:
    Wektor2D(double wspx = 0, double wspy = 0)
    {
        x = wspx;
        y = wspy;
    }
    ~Wektor2D() { ; }
    void   setX(double wspx) { x = wspx; }
    void   setY(double wspy) { y = wspy; }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double   x, y;
};

/*
struct Sum
{
        Sum() {}
        Sum(Wektor2D W1, Wektor2D W2) { Vector1 = W1; Vector2 = W2; }
        Wektor2D Vector1;
        Wektor2D Vector2;
};

struct Iloczyn
{
        Iloczyn() {}
        Iloczyn(Wektor2D W1, Wektor2D W2) { Vector1 = W1; Vector2 = W2; }
        Wektor2D Vector1;
        Wektor2D Vector2;
};
*/

Wektor2D operator+(Wektor2D Ve1, Wektor2D Ve2)
{
    return Wektor2D{Ve1.x + Ve2.x, Ve1.y + Ve2.y};
}

double operator*(Wektor2D Ve1, Wektor2D Ve2)
{
    return {Ve1.x * Ve2.x + Ve2.y * Ve1.y};
}
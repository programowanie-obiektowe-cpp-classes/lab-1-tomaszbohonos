#include <print>
#include <stdio.h>

struct Informer
{
    Informer() { std::println("informacja o Konstrukcji"); }
    ~Informer() { std::println("informacja o destrukcji"); }
};

class Wektor2D
{
public:
    Wektor2D(double wspx = 0, double wspy = 0)
    {
        x = wspx;
        y = wspy;
        std::println("Konstruktor niedomyslny: wspx={}, wspy={}", x, y);
    }
    ~Wektor2D() { std::println("Destrukcja"); }
    void   setX(double wspx) { x = wspx; }
    void   setY(double wspy) { y = wspy; }
    double getX()
    {
        std::println("wspx = {}", x);
        return x;
    }
    double getY()
    {
        std::println("wspy = {}", y);
        return y;
    }
    double   x, y;
    Informer info;
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
    std::println("Suma wektorow: wspx={}, wspy={}", Ve1.x + Ve2.x, Ve1.y + Ve2.y);
    return Wektor2D{Ve1.x + Ve2.x, Ve1.y + Ve2.y};
}

double operator*(Wektor2D Ve1, Wektor2D Ve2)
{
    std::println("iloczyn wektorowy: {}", Ve1.x * Ve2.x + Ve2.y * Ve1.y);
    return {Ve1.x * Ve2.x + Ve2.y * Ve1.y};
}
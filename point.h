// point.h
#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int x, int y);
    ~Point();
};

Point::Point(/* args */)
{
}

Point::~Point()
{
}

void Setx(int x);
void Sety(int y);
void show();




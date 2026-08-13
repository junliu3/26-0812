// line.h
#include <iostream>
#include "point.h"

class Line
{
private:
    Point start;
    Point end;
public:
    Line(/* args */);
    Line(int startX, int startY, int endX,int endY);
    Line(Point &s, Point &e);
    ~Line();
};


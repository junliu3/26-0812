// line.cxx
#include "line.h"
using namespace std;

Line::Line(/* args */)
{
    end.setX(1);
    end.setY(1);
    cout << "构造\n" << endl;

}

inline Line::Line(int startX, int startY, int endX, int endY)
{
    start.setX(startX);
    start.setY(startY);

}

inline Line::Line(Point &s, Point &e)
{

}

Line::~Line()
{

}

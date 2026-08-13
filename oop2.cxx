// oop2.cxx
#include <iostream>
#include <string>

using namespace std;

// 抽象类：包含纯虚函数的类，不能实例化，用来继承
// 抽象类：至少一个纯虚函数，可以包含具体函数
class Shape
{
private:
protected:
    string name;
public:
    Shape(): name("图形") {
        cout << "Shape()" << endl;
    }
    virtual ~Shape() {
        cout << "~Shape()" << endl;
    }
    // 纯虚函数
    virtual double area() = 0;
    // 具体
    void show()
    {
        cout << "图形的名称：" << name << endl;
    }
};

class Circle : public Shape
{
private:
    /* data */
public:
    Circle() {
        name = "圆形";
    }
    ~Circle() {}

    // 重写：纯虚函数
    double area() override
    {
        return 0;
    }
};

class Triagnle: public Shape
{
private:
    /* data */
public:
    Triagnle() {
        name = "三角形";
        cout << "Triagnle()" << endl;
    }
    ~Triagnle() {
        cout << "~Triagnle()" << endl;
    }

    double area()
    {
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    Shape *s;

    s = new Circle();
    s->show();
    delete s;

    s = new Triagnle();
    s->show();
    delete s;

    return 0;
}
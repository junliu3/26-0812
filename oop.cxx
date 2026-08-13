//oop.cxx
//继承
#include <iostream>

using namespace std;

//A,B,C
class A
{
private:
    int pri_a;      //类内部
protected:
    int pro_a;      //类内部及子类中
public:
    int pub_a;      //都可见
    A(/* args */) 
    {
        cout <<"A()" <<endl;
    }
    A(int a,int b,int c):pri_a(a),pro_a(b),pub_a(c)
    {
        cout<<"A(int,int,int)"<<endl;
    } 
    ~A()
    {
         cout <<"~A()" <<endl;
     }
    virtual void show()
     {
        cout <<pri_a <<"," <<pro_a <<","<<pub_a <<endl;
     }
     int getPriA(){
        return pri_a;
     }
};

class B : public A     //B继承了A
{
private:
    int pri_b;
    int pro_b;
    /* data */
public:
    B() {
        pro_a = 2;

        cout <<"B()" <<endl;
    }
    B(int a, int b, int c, int d) : A(a,b,c),pri_b(d) {

        cout <<"B(int, int, int, int )" <<endl;

    }
    ~B() {
        cout <<"~B()" <<endl;
    }
    // 子类中与父类同名的函数，方法重写(覆盖)
    void show() override
     {
        cout << getPriA <<"," <<pro_a <<","<<pub_a <<endl;
     }
};


class C : public B
{
    private:
    /* data */
    public:
    C (/* args */) {
        cout <<"C()" <<endl;
        
    }
    ~C () {
        cout <<"~C()" <<endl;

    }
};
int main(int argc, char const *argv[])
{
    // A a(1,2,3);
    // a.show();
    B b(1,1,1,1);
    b.show();

    A *a;
    a = new B();
    a->show();
    delete a;


    return 0;
}
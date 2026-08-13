// oop3.cxx
// 接口类
#include <iostream>

// 接口类：特殊的抽象类：
// 1.所有函数都是纯虚函数
// 2.没有成员属性
class USB
{
public:
    virtual ~USB() = default;
    virtual void plugIn() = 0;
    virtual void run() = 0;
    virtual void pullOut() = 0;
};

class Player
{
public:
    virtual ~Player() = default;
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void run() = 0;
};

// 多继承
class MP3 : public USB, public Player
{
private:
    /* data */
public:
    MP3()
    {
        std::cout << "MP3()" << std::endl;
    }
    ~MP3()
    {
        std::cout << "~MP3()" << std::endl;
    }
    void plugIn()
    {
        std::cout << "MP3 plugIn" << std::endl;
    }
    void run()
    {
        std::cout << "MP3 run" << std::endl;
    }
    void pullOut()
    {
        std::cout << "MP3 pullOut" << std::endl;
    }

    void play()
    {
        plugIn();
        run();
        pullOut();
    }
};

int main(int argc, char const *argv[])
{
    // is a
    // USB *u1 = new MP3();
    // u1->plugIn();
    // u1->run();
    // u1->pullOut();
    // delete u1;

    MP3 m1;
    m1.play();

    return 0;
}


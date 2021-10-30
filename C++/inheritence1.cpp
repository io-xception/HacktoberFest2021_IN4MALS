#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A()
    {
        x=20;
    }
    void showX(){
        cout<<"\nX="<<x;
    }
};
class B:public A{
    public:
    int y;
    B()
    {
        y=30;
    }
    void show()
    {
        showX();
        cout<<"\nY="<<y;
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}


#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B:public A{
    public:
    int y;
};
int main()
{
    B b;
    b.x=20;
    b.y=30;
    cout<<"\n member of A:"<<b.x;
    cout<<"\n member of B:"<<b.y;
    return 0;
}


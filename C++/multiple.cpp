#include<iostream>
using namespace std;
class A{
    protected:
    int a;
};
class B{
protected:
int b;
};
class C{
protected:
int c;
};
class D{
protected:
int d;
};
class E : public A,B,C,D
{
    int e;
    public:
    void get()
    {
        cout<<"Enter the value of a,b,c,d,e\n";
        cin>>a>>b>>c>>d>>e;
    }
    void show()
    {
        cout<<"a= "<<a<<"\nb= "<<b<<"\nc= "<<c<<"\nd= "<<d<<"\ne= "<<e;
    }
};
int main()
{
    E x;
    x.get();
    x.show();
    return 0;
}

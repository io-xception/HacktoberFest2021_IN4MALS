#include<iostream>
using namespace std;
class A1
{
    protected:
    char name[15];
    int age;
};
class A2:public A1
{
    protected:
    float height;
    float weight;
};
class A3:public A2
{
    protected:
    char sex;
    public:
    void get()
    {
        cout<<"\nEnter name and age:";
        cin>>name>>age;
        cout<<"\nEnter the height and weight:";
        cin>>height>>weight;
    }
    void show()
    {
        cout<<"\n Name: "<<name<<"\nAge:"<<age;
        cout<<"\n Height: "<<height<<"\nWeight: "<<weight;
    }
};
int main()
{
    A3 x;
    x.get();
    x.show();
    return 0;
}
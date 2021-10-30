#include<iostream>
using namespace std;
class ABC
{
protected:
char name[15];
int age;
};
class abc:public ABC{
    float height;
    float weight;
    public:
    void getdata()
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
    abc x;
    x.getdata();
    x.show();
    return 0;
}
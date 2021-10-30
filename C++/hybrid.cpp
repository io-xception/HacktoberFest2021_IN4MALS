#include<iostream>
using namespace std;
class player{
    protected:
    char name[15];
    char gender;
    int age;
};
class physique:public player::player{
    protected:
    float height;
    float weight;
};
class Location
{
    protected:
    char city[10];
    char pin[7];
};
class Gene:public physique,Location
{
    protected:
    char game[15];
    public:
    void get()
    {
        cout<<"Enter the following information\n";
        cout<<"Name : ";
        cin>>name;
        cout<<"Gender:";
        cin>>gender;
        cout<<"Age:";
        cin>>age;
        cout<<"Height:";
        cin>>height;
        cout<<"Weight:";
        cin>>weight;
        cout<<"City:";
        cin>>city;
        cout<<"pincode:";
        cin>>pin;
        cout<<"Game:";
        cin>>game;
    }
    void show()
    {
        cout<<"Name : ";
        cout<<name;
        cout<<"Gender:";
        cout<<gender;
        cout<<"Age:";
        cout<<age;
        cout<<"Height:";
        cout<<height;
        cout<<"Weight:";
        cout<<weight;
        cout<<"City:";
        cout<<city;
        cout<<"pincode:";
        cout<<pin;
        cout<<"Game:";
        cout<<game;

    }
};
int main()
{
    Gene g;
    g.get();
    g.show();
}

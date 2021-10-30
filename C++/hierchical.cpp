#include<iostream>
using namespace std;
class red
{
    public:
    red()
    {
        cout<<"Red\n";
    }
};
class Yellow {
    public:
    Yellow()
    {
        cout<<"Yellow\n";
    }
};
class Blue{
    public:
    Blue()
    {
        cout<<"Blue\n";
    }
};
class orange:public red,Yellow
{
    public:
    orange()
    {
        cout<<"orange\n";
    }
};
class green:public Blue,Yellow
{
    public:
    green()
    {
        cout<<"green\n";
    }
};
class violet:public red,Blue
{
    public:
    violet()
    {
        cout<<"violet\n";
    }
};
class reddishbrown:public orange,violet
{
    public:
    reddishbrown()
    {
        cout<<"reddishbrown\n";
    }
};
class yellowishbrown:public orange,green
{
    public:
    yellowishbrown()
    {
        cout<<"yellowishbrown\n";
    }
};
class bluishbrown:public green,violet
{
    public:
    bluishbrown()
    {
        cout<<"bluishbrown\n";
    }
};
int main()
{
    reddishbrown r;
    bluishbrown b;
    yellowishbrown y;
    return 0;
}


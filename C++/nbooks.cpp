#include<iostream>
using namespace std;
class Books
{
    private:
    string name;
    string author;
    float price;
    public:
    void input()
    {
        cout<<"Enter the name,author and price respectively\n";
        cin>>name>>author>>price;
    }
    friend  void print(Books a[],int n, int l, int u);
};
void print(Books * a,int n, int l, int u)
{
    for(int i=0;i<n;i++)
    {
        if((a+i)->price>l && (a+i)->price<u)
        {
            cout<<"Name : "<<(a+i)->name<<"\nAuthor : "<<(a+i)->author;
        }
    }
}
int main()
{
    int n,l,r;
    cout<<"Enter the number of Books whose details you want to Return \n";
    cin>>n;
    Books a[n];
    for(int i=0;i<n;i++)
    {
        a[i].input();
    }
    cout<<"Enter the range(Lower then Upper)";
    cin>>l>>r;
    print(a,n,l,r);
    return 0;
}


#include<iostream>
using namespace std;
class rectangle
{
    int L,B;
    public:
    rectangle()
    {
        L=0 ;
        B=0;
    }
    void operator++()
    {
        L=L+2;
        B=B+2;
    }
    void display()
    {
        cout<<"length:"<<L;
        cout<<"Breadth:"<<B;
    }
};
int main()
{
    rectangle r;
    cout<<"length and breadth before:";
    r.display();
    ++ r;
    cout<<"length and breadth after:";
    r.display();
}
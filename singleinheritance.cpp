#include<iostream>
using namespace std;
class base
{
    public:
    int base_value;
    void base_input()
    {
        cout<<"enter the interger of base class";
        cin>>base_value;
    }
};
class derived:public base
{
    int derived_value;
    public:
    int derived_input()
    {
        cout<<"enter the integer of derived class";
        cin>>derived_value;
    }
    void sum()
    {
        cout<<"sum of two integers is:"<<base_value+derived_value<<endl;
    }
};
int main()
{
    derived d;
    d.base_input();
    d.derived_input();
    d.sum();
    return 0;

}
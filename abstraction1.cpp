#include<iostream>
using namespace std;
class abstraction
    {
        private:
        int num;
        char ch;
        public:
        void setvalues(int n, char c)
        {
            num=n;
            ch=c;
        }
        void getvalues()
        {
            cout<<"number is:"<<num<<endl;
            cout<<"char is:"<<ch<<endl;
        }
    };
    int main()
    {
        abstraction obj;
        obj.setvalues(100,'c');
        obj.getvalues();
        return 0;
    }
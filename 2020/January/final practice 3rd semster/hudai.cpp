#include<iostream>
using namespace std;
class base
{
public:
    int x,y;
    virtual void fun()=0;
    base(int a)
    {
        x=a;
    }
};
class derive:public base
{
public:
    derive(int b,int a):base(a)
    {
        y=b;
    }
    void fun()
    {
        cout<<x<<endl<<y<<endl;
    }
};
int main()
{
    derive oby(1,2);
    oby.fun();
    return 0;
}

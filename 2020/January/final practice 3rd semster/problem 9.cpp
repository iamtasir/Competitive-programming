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
class Derive:public base
{
public:
    Derive(int b,int a):base(a)
    {
        y=b;
    }
    void fun()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Derive ob(10,12);
    ob.fun();
    return 0;
}

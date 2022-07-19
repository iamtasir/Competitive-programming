#include<iostream>
using namespace std;
class base{
   public:
       virtual void display(){
         cout<<"base class"<<endl;
         }
};
class derived:public base{
public:
     void display(){
    cout<<"derived"<<endl;
    }
};
int main()
{
    base *p;
    base ob;
    derived ob1;
    p=&ob;
    p->display();
        p=&ob1;
        p->display();

}

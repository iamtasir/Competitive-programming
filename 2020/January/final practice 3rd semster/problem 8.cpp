#include<iostream>
using namespace std;
  class input{
 public:

    int length,width;
    void getdata(){
       cin>>length>>width;
       }
       virtual void area()=0;
       virtual void perimeter()=0;
};
class square:public input{
 public:
    int p,q;
    void area(){
      p=length*width;
      cout<<p<<endl;

    }
    void perimeter()
    {
        q=4*length;
        cout<<q<<endl;
    }
};
class rectangle:public input{
        public:
            int a,b;
            void area()
            {
                a=length*width;
                cout<<a<<endl;
            }
         void perimeter()
         {
             b=2*(length+width);
             cout<<b<<endl;
         }

};
int main()
{
    square ob;
    ob.getdata();
    ob.area();
    ob.perimeter();
    rectangle ob1;
    ob1.getdata();
    ob1.area();
    ob1.perimeter();
    return 0;
}


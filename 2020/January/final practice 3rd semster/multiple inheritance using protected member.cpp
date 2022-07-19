#include<iostream>
using namespace std;
 class base{
   protected:

       int a,b;
       //ask miss
       public:
       void getab(int n,int m){
         a=n;
         b=m;
       }
};
class derived:public base{
public:
    int c;
    void getc(int n){
     c=n;
}

void showabc(){
     cout<<a<<" "<<b<<" "<<c<<endl;
}
};
int main()
{

    derived d;
    d.getab(1,2);
    d.getc(3);
    d.showabc();
    return 0;
}

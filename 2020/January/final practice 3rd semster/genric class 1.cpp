#include<iostream>
using namespace std;
template<class mytype> class myclass{
     mytype p1,p2;
 public:
    myclass(mytype x,mytype y){
        p1=x;
        p2=y;
   }
   void display()
   {
       cout<<p1<<endl<<p2;
   }
};
int main()
{
    myclass<int>ob(10,20);
    myclass<string>ob1("abir","tasir");
    ob.display();
    ob1.display();
    return 0;
}

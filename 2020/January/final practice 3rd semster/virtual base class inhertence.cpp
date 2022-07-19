//solved
#include<iostream>
using namespace std;
class base{
   public:
       int id;
       void displaya(){
         id=10;
         cout<<id<<endl;
       }
};
class derived1:virtual public base{
   public:
       int j;
       void displayb(){
         j=20;
         cout<<j<<endl;
         }
};
class derived2:virtual public base{
   public:
       int u;
        void displayc(){
         u=30;
         cout<<u<<endl;
       }
};
class derived3: public derived1,public derived2{
   public:
       int l;
        void displayd(){
          l=50;
          cout<<l<<endl;
       }
};
int main(){
   derived3 d;
   d.displaya();
   d.displayb();
   d.displayc();
   d.displayd();
   return 0;

}

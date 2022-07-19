#include<iostream>
using namespace std;
class test {
     public:
         int a,b;
         test(int x,int y){
           a=x;
           b=y;
         }
         test operator +(test t){
           test temp;
           temp.a=a+t.a;
           temp.b=b+t.b;
           return temp;
         }
       test(){
             a+b;
         }
         void display()
         {
             cout<<a<<" "<<b<<endl;

         }
  };
  int main()
  {
      test t1(10,20),t2(30,40),t3;
      t3=t1+t2;
      t1.display();
      t2.display();
      t3.display();
      return 0;
  }

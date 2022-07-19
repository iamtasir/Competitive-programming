//verified
#include<iostream>
using namespace std;
class person{
   public:
       int id;
       string name;
       void display(){
         cout<<id<<" "<<name<<endl;
    }
};
class student:public person{
 public:
    int age;

     void display1(){ display();
      cout<<age<<endl;

   }
  };
int main()
{
    student ob;
    ob.id=7;
    ob.name="mitu";
    ob.age=22;
    ob.display1();
    return 0;

}

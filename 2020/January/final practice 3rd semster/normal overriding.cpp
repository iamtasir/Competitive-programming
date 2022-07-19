#include<iostream>
using namespace std;
class teacher{
   public:
       void output(){
       cout<<"first"<<endl;
       }
};
class student:public teacher{
  public:
      void output(){
          //void output();
         cout<<"first line"<<endl;
         }
};
class student1:public student{
   public:
       void output(){
       cout<<"first line even"<<endl;
       }
};
int main()
{
    student ob;
    ob.output();
    student1 ob1;
    ob1.output();
    return 0;
}

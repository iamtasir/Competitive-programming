#include<iostream>
using namespace std;
class teacher{
   public:
        void output(){
       cout<<"first"<<endl;
       }
};
class student: public teacher{
  public:
       void output(){
         cout<<"first line"<<endl;
         }
};

int main()
{
    teacher ob;
    ob.output();
    student ob1;
    ob1.output();
    return 0;
}

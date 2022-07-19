//verified
#include<iostream>
using namespace std;
class info{
   public:
       int id;
       void getid(){
          cin>>id;
          cout<<id<<endl;
       }
  };
class result{
      public:
          int mark;
          void getmark(){
            cin>>mark;
            cout<<mark<<endl;
          }
};

class derived:public result,public info{

public:
    void print(){
       getid();
       getmark();
       }
};
int main()
{
    derived d;
    d.print();
    return 0;
}


#include<iostream>
using namespace std;
class test {
 public:
    virtual void sendmessages()=0;
};
class student:public test{
   public:
    void sendmessages(){
       cout<<"Display"<<endl;
    }
};
int main()
{
    student ob;
    ob.sendmessages();
    return 0;
}

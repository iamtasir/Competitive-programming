#include<iostream>
using namespace std;
class myclass{
   public:
       void add(int a ,int b){
       cout<<a+b<<endl;
       }
       void add(int a,int b,int c){
       cout<<a+b+c<<endl;
       }
};
int main()
{
    myclass ob;
    ob.add(2,3);
    ob.add(2,3,4);
    return 0;
}

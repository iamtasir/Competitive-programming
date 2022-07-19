verified
#include<iostream>
using namespace std;
class test{
      int a,b,c;
  public:
    void getdata(int x,int y,int z);
      void operator -();
      void display();
      };


  void test::getdata(int x,int y,int z)
  {
      a=x;
      b=y;
      c=z;
  }
  void test::operator -(){
     a=-a;
     b=-b;
     c=-c;
}
void test::display(){
   cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    test obj;
    obj.getdata(10,20,-30);
    obj.display();
    -obj;
    obj.display();
    return 0;
}

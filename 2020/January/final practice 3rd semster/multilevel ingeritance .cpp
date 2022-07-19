solved
#include<bits/stdc++.h>
using namespace std;
class student{
  public:
      int id;
      string name;
      void getdata(){
      cin>>id>>name;
    }
     void putdata(){
     cout<<id<<" "<<name<<endl;
     }
};
class marks:public student{
   protected:
       int m1,m2,m3;
       public:
       void getmark()
       {
           cin>>m1>>m2>>m3;
       }
       void putmark(){
         cout<<m1<<" "<<m2<<" "<<m3<<endl;
       }
};
class result:public marks{
  public:
      int total;
      float avg;
      void show(){
       total=m1+m2+m3;
       avg=total/3;
       cout<<total<<" "<<avg<<endl;
       }
 };
int main()
{
    result r;
    r.getdata();
    r.getmark();
    r.putdata();
    r.putmark();
    r.show();
    return 0;

}


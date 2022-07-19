#include<iostream>
using namespace std;
class Alpha{
  protected:
    int a;
    char b;
  public:
    Alpha(int x,char y){
       a=x;
       b=y;
  cout<<"In alpha class"<<endl;
}
};
class Beta:public Alpha{
  protected:
    int c;
    char d;
    public:
    Beta(int x,char y):Alpha(x,y){

    cout<<"In beta class"<<endl;
    }
};
int main(){
   Beta ob(1,'a');
   return 0;

}

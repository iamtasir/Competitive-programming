//solved
#include<iostream>
using namespace std;
class arraytype{
public:
    int ar[5];
    int i;
    void setvalue(){
    for( i=0;i<5;i++)
    {
        ar[i]=i;
    }
    }
   int operator[](int i){
       return ar[i];
    }
};
int main()
{
  arraytype ob;
  int i;
  ob.setvalue();
  for(i=0;i<5;i++){
    cout<<ob[i]<<endl;
  }
  return 0;
}

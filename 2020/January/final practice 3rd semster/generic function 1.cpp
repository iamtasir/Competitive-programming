#include<iostream>
using namespace std;
template<class t>
t large(t n1,t n2){

  if(n1>n2)
   return n1;
   else

   return n2;

}
int main()
{
    int i1,i2;
    cin>>i1>>i2;
    cout<<large(i1,i2)<<endl;
}

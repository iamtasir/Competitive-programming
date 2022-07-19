#include<iostream>
using namespace std;
int main(){
int t,i,j,n,r=0,a;
cin>>t;
//cout<<endl;
for(i=1;i<=t;i++){
cin>>n;
for(j=0;j<n;j++){
cin>>a;
if(a>0)
r=r+a;
}
//cout<<endl;
cout<<"Case "<<i<<":"<<" "<<r<<endl;
r=0;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int m,n,a,x[100],i,s=0,t,ans;
    cin>>m>>n>>a;
    t=(m*a);
    for(i=0;i<m-1;i++){
        cin>>x[i];
        s+=x[i];
    }
    if(s>=t)
        cout<<"0"<<endl;
  else{
        ans=t-s;
    if(ans>n)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
        }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int d=0,s=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        s+=a[i];
        }
        sort(a,a+n);
         d=s/(n-1);
         if(s%(n-1)!=0)
            d++;
         //   cout<<d<<endl;
         if(d>=a[n-1])
            cout<<(d*(n-1))-s<<endl;
         else
            cout<<(a[n-1]*(n-1))-s<<endl;

    }
    return 0;
}

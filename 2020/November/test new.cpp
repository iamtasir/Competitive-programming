#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,x,y,c=0,i;
    string a,b;
    cin>>t;
    while(t--){
        int a1[27],b1[27],x,y,c=0,s;
        memset(a1,0,sizeof(a1));
        memset(b1,0,sizeof(b1));
        cin>>n>>k;
        cin>>a>>b;
        for(i=0;i<n;i++){
            x=a[i]-96;
            y=b[i]-96;
            a1[x]++;
            b1[y]++;
        }
        for(i=1;i<27;i++){
            if(a1[i]<b1[i])
               c=1;
               s=a1[i]-b1[i];
            if(s%k!=0)
                c=1;
            a1[i+1]+=s;
        }
        if(c==1)
            cout<<"NO"<<endl;
        else if(c==0)
            cout<<"YES"<<endl;
    }
    return 0;
}

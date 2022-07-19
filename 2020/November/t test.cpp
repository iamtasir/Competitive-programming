#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,w,x[100000],s=0,i,c=0,p=0;
        cin>>n>>w;
        for(i=1;i<=n;i++)nnnn
            cin>>x[i];
            for(i=1;i<=n;i++){
              if(x[i]>=w/2 && x[i]<=w){
                 cout<<1<<endl;
                 cout<<i<<endl;
                 p=1;
                 break;
              }
              else if(x[i]<w/2){
                s+=x[i];
                x[i]=-1;
                c++;
                if(s>=w/2 && s<=w){
                    cout<<c<<endl;
                      p=1;
                    for(i=1;i<=n;i++){
                        if(x[i]==-1)
                            cout<<i<<" ";
                    }
                    break;
                }
              }
        }
        if(p==0)
            cout<<-1<<endl;

    }
    return 0;
}

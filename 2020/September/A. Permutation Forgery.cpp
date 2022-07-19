
#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;

#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007


 ll ar[MAX];
int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n;cin>>n;
   for(ll i=0;i<n;i++) cin>>ar[i];

//swap(a[0],a[1]);
 for(ll i=n-1;i>=0;i--) cout<<ar[i]<<" ";
 cout<<endl;

   }


    return 0;
}

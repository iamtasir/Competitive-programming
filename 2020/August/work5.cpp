#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
ll ar[1000000];
int main()
{
    ll n;

  cin>>n;
  for(ll i=0;i<n;i++)
    cin>>ar[i];
    ll ans=0;
    ll  ma=ar[0];
   for(ll i=1;i<n;i++)
      {
          ma=max(ma,ar[i]);
          if((ar[i])-ma<0)
          {
              ans+=abs(ma-ar[i]);
          }
      }
      cout<<ans<<endl;
    return 0;
}

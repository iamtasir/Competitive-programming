#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		ss              ' '
#define MAX 1000005
int main()
{
   ll n;cin>>n;
   vector<ll>v(n);
   ll sum=0;

  for(ll i=0;i<n;i++)
  {
      ll a;
   cin>>v[i];
   sum+=v[i];

  }
  multiset<ll>prefix;
  multiset<ll>suffix(v.begin(),v.end());
  if(sum%2==1){
    cout<<"NO"<<nn;
    return 0;
  }
  sum/=2;
  ll csum=0;
  for(ll i=0;i<n;i++)
  {
    // ll x=a[i];
     prefix.insert(v[i]);
     suffix.erase(suffix.find(v[i]));
     csum+=v[i];
     if(csum==sum){
        cout<<"YES"<<nn;return 0;}
     else if(csum<sum)
     {
         ll x=sum-csum;
         cout<<x<<"#"<<nn;
         if(suffix.count(x)){
            cout<<"YES"<<nn;
            return 0;
         }
     }
     else
     {
        ll x=csum-sum;
         cout<<x<<"*"<<nn;
         if(prefix.count(x)){
            cout<<"YES"<<nn;return 0;}
     }


  }
  cout<<"NO"<<nn;

    return 0;
}

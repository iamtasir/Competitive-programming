
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


ll maxSubArraySum(ll a[], ll size)
{
    ll LL_MIN;
    ll max_so_far =  LL_MIN, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
 //   int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
 ll t,a[10000],temp;
   cin>>t;
   while(t--){
        ll n,sum=0;
      cin>>n;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
    ll s = sizeof(a)/sizeof(a[0]);
   long long  max_sum = maxSubArraySum(s, n);
    cout << "Maximum contiguous sum is " << max_sum;

}
return 0;
}

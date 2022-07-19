
#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
int main()
{
    int t;
    string s;
    ll temp,temp2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>temp>>temp2;
        ll a,b;
        for(int i=0;i<s.length();i++)
           {
           	    if(s[i]=='A')
           	    	a=i;
                    if(s[i]=='B')
                        b=i;
        }

        if((b-a)%(temp+temp2)==0)
            cout<<"unsafe"<<nn;
        else
            cout<<"safe"<<nn;
    }
    return 0;
}

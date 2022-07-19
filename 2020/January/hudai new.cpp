
#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <long long, long long >      pll;
typedef      vector< pair <long long, long long>>      vpll;
typedef		vector<long long>      vll;


int main()
{
    O_O ;
    ll t,p,q,l,n;
    cin>>t;
    vector<pair<long long,long long> > vc;
    while(t--)
    {
        cin>>n;

        string x;
        for(ll i=0; i<n; i++)
        {


            cin>>p>>q;
            vc.push_back({p,q});
        }
        sort(vc.begin(),vc.end());
        p=0;
        q=0;
        l=0;
        for(ll i=0; i<n; i++)
        {
            if(p<=vc[i].first)
            {

                for(p; i<vc[i].first; p++)
                {
                    x.push_back('R');
                }
                if(q<=vc[i].second)
                {

                    for(q; q<vc[i].second; q++)
                    {
                        x.push_back('U');

                    }
                    l++;


                }


            }


        }
        if(l==n)
        {
            cout<<"YES"<<nn;
            cout<<x<<nn;
        }
        else
            cout<<"NO"<<nn;
        vc.clear();


    }


    return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

ll vec[MAX];
int main()
{
//O_O ;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        stack<ll>st;
        ll c=0;
        for(ll i=0; i<n; i++)cin>>vec[i];
        ll x=0,w=0;
        for( ll i=n-1; i>=0; i--)
        {

            if(st.empty()||st.top()<=vec[i])
            st.push(vec[i]),vec[i]=-1;
            else
            {
                w=vec[i];
                vec[i]=-1;
                break;
            }
}
//cout<<w<<nn;
        vector<ll>v;

        if(st.size()==n)
        {
            cout<<-1<<nn;
            while(!st.empty())
            {
                // cout<<st.top();
                st.pop();
            }
            continue;

        }
        while(!st.empty())
        {
            v.pb(st.top());
            st.pop();
        }
sort(v.begin(),v.end());
        ll y=0;
        for(ll i=0; i<v.size(); i++) ///finding next greater elemment
        {
            if(v[i]>w)
            {
                y=v[i],v[i]=-1;
                break;
            }
}
        for(ll i=0; i<n; i++)if(vec[i]!=-1)cout<<vec[i]; ///printing first vector
if(y!=0) cout<<y;
    v.pb(w);
        sort(v.begin(),v.end());
for(ll i=0; i<v.size(); i++) if(v[i]!=-1) cout<<v[i];///printing stack vector
        cout<<nn;

}



    return 0;
}

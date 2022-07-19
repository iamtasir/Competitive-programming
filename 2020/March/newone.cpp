#include<bits/stdc++.h>

using namespace std;

#define     O_0_O               ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define     ll                  long long
#define     nl                  "\n"
#define     floop(begin,end,k)  for(k=begin;k<end;k++)
#define     rloop(end,begin,k)  for(k=begin-1;k>=end;k--)
#define     abs(x)              (x>=0?x:-x)
#define     all(p)              p.begin(),p.end()
#define     sz(a)               (ll)a.size()
#define		gcd(a,b)            __gcd(a,b)
#define		lcm(a,b)            (a*b)/gcd(a,b)
#define     pb                  push_back
#define     pi                  acos(-1)
#define     Mx                  1e6+5
#define     vi                  vector<int>
#define     vll                 vector<ll>
#define     vc                  vector<char>
#define     vs                  vector<string>
#define     print(a)            cout<<a
#define     tem                 template<class c

void  inline File_Read()
{
        /// File Reader.......................
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
}


typedef string str;
typedef double ld;



ll arll[100010];
int ari[100010];
char arc[100005];
map<string,int>msi;
map<int,int>mii;


int main()
{
    /*  Md Asfakur Rahat
    *   BUBT
    *   tempalte.cpp
    */
        //File_Read();
        /// Optimizer...............
        O_0_O;
        /// Main code............
        /// Created:03.03.2020
        ll n,m,i,j,ans=0;

        cin>>n>>m;
        ans+=n;
        while(n>=m)
        {
            i=n%m;
            cout<<i<<nl;
            n/=m;
            ans+=n;
            n+=i;
        }
        cout<<ans<<nl;
        return 0;
}


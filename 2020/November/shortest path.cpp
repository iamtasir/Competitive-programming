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
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');

#define precision(a) fixed << setprecision(a)

#define mod 1000000007


void pPath(int path[][4], int v, int u)
{
	if (path[v][u] == v)return;

	pPath(path, v, path[v][u]);
	cout << path[v][u] << " ";
}
void pSolution(int cost[4][4], int path[4][4])
{
	for (int v = 0; v < 4; v++)
	{
		for (int u = 0; u < 4; u++)
		{
			if (u != v && path[v][u] != -1)
			{
				cout << "Shortest Path start " << v << " to " << u << "= " << v << " ";
				pPath(path, v, u);
				cout << u << nn<<nn;
			}
		}
	}
}

void floydWarshall(int adjMatrix[][4])
{
int cost[4][4], path[4][4];

  for (int v = 0; v <4; v++){
		for (int u = 0; u < 4; u++){
			cost[v][u] = adjMatrix[v][u];

			if (v == u)
				path[v][u] = 0;
			else if (cost[v][u] != INT_MAX)
				path[v][u] = v;
			else
				path[v][u] = -1;
		}
	}

	for (int k = 0;k<4; k++){
		for (int v=0; v<4; v++){
			for (int u = 0;u<4;u++){

if (cost[v][k]!=INT_MAX&cost[k][u]!=INT_MAX&&cost[v][k]+cost[k][u]< cost[v][u])
    {
					cost[v][u] = cost[v][k] + cost[k][u];
					path[v][u] = path[k][u];
				}
    }
        if (cost[v][v] < 0){
				cout << "Negative Weight Cycle Found"<<nn;
				return;
			}
		}
}
pSolution(cost, path);
}

int main()
{
    int x=0;
   int adjMatrix[4][4] =
	{
		{ 0, INT_MAX,	-2, INT_MAX },
		{ 4, 0, 3, INT_MAX },
		{ INT_MAX, INT_MAX, 0, 2 },
		{ INT_MAX, -1, INT_MAX, 0 }
	};

	floydWarshall(adjMatrix);

	return 0;
}


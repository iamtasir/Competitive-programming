#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define h1 7897897897897897
#define h2 7897466719774591
#define b1 98762051
#define b2 98765431
#define inf 1000000000
#define pi 3.1415926535897932384626
#define LMAX 9223372036854775807
#define ll long long
#define fi first
#define sec second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pii>
#define SET(a, b) memset(a, b, sizeof(a));
#define all(x) (x).begin(), (x).end()
#define FF fflush(stdout)
int n, m, k, x, y, sum, cnt, ans, t, s, e, w, xx, yy;
char st[100005];
int main () {
	cin>>t>>x>>y>>xx>>yy;
	if (x>xx) w=x-xx;
	else e=xx-x;
	if (y>yy) s=y-yy;
	else n=yy-y;
	scanf("%s", st);
	for (int i=0; i<t; i++){
		if (st[i]=='S') s--;
		else if (st[i]=='N') n--;
		else if (st[i]=='E') e--;
		else w--;
		if (s<=0&&n<=0&&e<=0&&w<=0) {
			printf("%d\n", i+1);
			cout<<s<<ss<<n<<ss<<e<<w;
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}

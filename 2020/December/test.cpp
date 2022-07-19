/*=================================*\

      Md. Shahidul Islam
         CSE, BRUR
      Rangpur, Bangladesh
 mail: shahidul.cse.brur@gmail.com
 FB  : fb.com/shahidul.brur
 Blog: shahidul-brur.blogspot.com
\*=================================*/
#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsinged long long
#define vi       vector<int>
#define vll      vector<ll>
#define ii       pair<int, int>
#define vii      vector<pair<int, int> >
#define vs       vector<string>
#define vd       vector<double>
#define mii       map<int, int>
#define mli       map<ll, int>
#define msi       map<string, int>

#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define sz              size()
#define all(a)          a.begin(), a.end()
#define rep0(i, k)      for(int i=0;i<k;i++)
#define rep1(i, k)      for(int i=1;i<=k;i++)
#define repab(i, a, b)  for(int i=a;i<=b;i++)
#define repba(i, b, a)  for(int i=b;i>=a;i--)
#define pi              acos(-1.0)
#define eps             1e-6
#define mem(a, b)       memset(a, b, sizeof(a))
#define mod             1000000007
#define inf             1e9

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    string a, b; // ser, mar

    cin>>n>>a>>b;
    int ser=0, mar=0, i, j;
    sort(all(a));
    sort(all(b));
    //serlock, max
    for(i=0, j=0;j<n;)
    {
        if(b[j]>a[i])
        {
            ser++;
            i++;
            j++;
        }
        else j++;
        cout<<ser<<endl;
    }
    //mario, max
    for(i=n-1, j=n-1;i>=0 && j>=0;)
    {
        if(b[j]<a[i])
        {
            mar++;
            i--;
        }
        else
        {
            i--;
            j--;
        }
    }
    cout << mar << "\n" << ser << "\n";
    return 0;
}




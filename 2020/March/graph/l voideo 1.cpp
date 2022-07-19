#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
ll adj[100][100];
int main()
{
    //freopen("text.txt","w",stdin);
 ll node,edge;
 cin>>node>>edge;
 for(ll i=0;i<edge;i++)
 {
     ll n1,n2;
     cin>>n1>>n2;
     adj[n1][n2]=1;
     adj[n2][n1]=1;
 }
 for(ll i=0;i<node;i++)
 {
     for(ll j=0;j<node;j++)
        cout<<adj[i][j]<<" ";
     cout<<nn;
 }



    return 0;
}

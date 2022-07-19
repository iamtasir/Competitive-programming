#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
ll adj[1000][10000];
int main()
{
   ll node,edge;
   cin>>node>>edge;
   for(ll i=0;i<edge;i++)
   {
       ll n1,n2;cin>>n1>>n2;
       adj[n1][n2]=1;
       adj[n2][n1]=1;

   }
   cout<<"Enter number that u find neighber"<<nn;
   ll temp;cin>>temp;//find the number that u neighber ;
   for(ll i=0;i<node;i++)
   {
       if(adj[temp][i]==1)
        cout<<i<<" ";

   }



    return 0;
}

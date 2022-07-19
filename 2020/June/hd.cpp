#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;


int main()
{
 //O_O ;
   ll a;
   cin>>a;
   while(a--){
        ll n;cin>>n;
   string s;
   cin>>s;
   ll x=0,w=0;
   for(ll i=0;i<n;i++)
   {
       if(s[i]=='(')
            x++;
       else if(s[i]==')'&&x>0)
        x--;
       else
        w++;
   }
   cout<<w<<endl;



   }


    return 0;
}

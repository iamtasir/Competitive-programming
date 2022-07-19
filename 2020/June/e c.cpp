#include<bits/stdc++.h>
using namespace std;
typedef        long long       ll;
#define        ss              ' '
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

ll ar[MAX],br[MAX],cr[MAX],dr[MAX];

int main()
{
//O_O ;
    ll n,x,y;
    cin>>n>>x>>y;
    for(ll i=1; i<n; i++)
    {
        ll h1,h2,h3;
        cin>>ar[i]>>br[i]>>cr[i]>>h1>>h2>>h3;
        ll temp=min(h1,min(h3,h2));
        dr[i]=temp;
    }

    ll value1,value2,indexvalue,index,minvalue;
    for(ll i=1; i<n; i++)
    {
        ll mi=INT_MAX;


        for(ll j=1; j<n; j++)
        {
            if(dr[j]!=0)
            {
                ll temp2=abs(br[j]-x);
                ll temp4=abs(cr[j]-y);
                temp2*=temp2,temp4*=temp4;
                ll temp3=sqrt(temp2+temp4);
                if(temp3<mi)
                {
                    mi=temp3;
                    value1=br[j],value2=cr[j];
                    indexvalue =ar[j];
                    index=j;
                    minvalue=dr[j];
                }
            }
        }
        x=value1,y=value2;
        dr[index]=0;

        cout<<indexvalue<<ss<<minvalue<<endl;
    }




    return 0;
}

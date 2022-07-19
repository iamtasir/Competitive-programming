#include<bits/stdc++.h>
using namespace std;

#define     PI              acos(-1.0)
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define     precision(a)    fixed<<setprecision(a)
#define     endl            '\n'
#define     Flush           cout<<flush
#define     LLMX            0x3fffffffffffffff
#define     PW2(a)          (long long)1<<a


int main()
{
    long long i,j,k,l,m,n,o,p,q,tst,csin=0;
    cin>>tst;
    vector<pair<long long, long long> > vc;

    while(tst--)
    {
        string s;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>p>>q;
            vc.push_back({p,q});
        }
        sort(vc.begin(),vc.end());

        p=0;
        q=0;
        l=0;
        for(i=0; i<n; i++)
        {
            if(p<=vc[i].first)
            {
                for(p; p<vc[i].first; p++)
                {
                    s.push_back('R');
                }

                if(q<=vc[i].second)
                {
                    for(q; q<vc[i].second; q++)
                    {
                        s.push_back('U');
                    }

                    l++;
                }
            }
        }
        if(l==n)
        {
            cout<<"YES\n";
            cout<<s<<endl;
        }
        else
            cout<<"NO\n";
        vc.clear();

    }



    return 0;
}

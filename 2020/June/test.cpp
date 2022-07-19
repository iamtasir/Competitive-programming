#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<int> a(n);

    long long sum=0;
    for (int i=0; i<n; i++)
        cin>>a[i],
        sum+=a[i];

    if (sum%2==1)   {cout<<"NO"; return 0;}
    long long target=sum/2;
    long long cursum=0;

    multiset<long long> pre;
    multiset<long long> suf(a.begin(),a.end());

    for (int i=0; i<n; i++)
    {
        pre.insert(a[i]);
        suf.erase(suf.find(a[i]));

        cursum+=a[i];
        if (cursum==target)
            {cout<<"YES"; return 0;}

        else if (cursum<target)
        {
            long long d=target-cursum;
            cout<<d<<"#"<<endl;
            if (suf.count(d))
                {cout<<"YES"; return 0;}
        }

        else
        {
            long long d=cursum-target;
            if (pre.count(d))
                {cout<<"YES"; return 0;}
        }
    }
    cout<<"NO";
}

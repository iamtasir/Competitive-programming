#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    int flag=1;
    cin>>s;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;

            }

        }
    }

    cout<<s;
}

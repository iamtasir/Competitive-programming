#include<bits/stdc++.h>

using namespace std;

int fl[200];

vector<string> ans;

int main()
{

    int n;
    string s,temp;
    char c;
    cin>>s;
    temp=s;
    c=s[s.size()-1];
    cin>>n;
    int index;
    int f=0;
    char lc;
    bool ache=false;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(c==s[0] && !f && s!=temp ){
            ache=true;
            ans.push_back(s);
            f=1;
        }
        else if(c==s[0]){
            ache=true;
            ans.push_back(s);
            fl[s[0]]++;
        }
        else
            fl[s[0]]++;
    }
    if(!ache)
        cout<<'?'<<endl;
    else
    {
        int ff=0;
        for(int j=0;j<ans.size();j++)
        {
            int ll=ans[j].size()-1;
            if(!fl[ans[j][ll]]){
                ff=1;
                index=j;
                break;
            }
        }
        if(ff)
            cout<<ans[index]<<'!'<<endl;
        else
            cout<<ans[0]<<endl;
    }
    return 0;

}

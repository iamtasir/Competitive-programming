///*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
 //O_O ;
 string s;cin>>s;
 string ans2;
 for(int i=0;i<s.size();i++)
 {
     char c=s[i];
     int w=0;
     string ans;
     for(int j=i+1;j<s.size();j++)
     {
         int x=abs(c-s[j]);
         if(x==2){
                w=1;
                ans+=c;
         c=s[j];

         }
     }
     if(w) ans+=c;
     if(ans2.size()<=ans.size())
        ans2=ans;

 }
 if(ans2.size()>1)
 {
     for(int i=1;i<s.size();i++)
        cout<<abs(s[i]-s[i-1])<<" ";
     cout<<endl;
     cout<<ans2<<endl;
 }
 else
    cout<<"TRY NEXT TIME"<<endl;

    return 0;
}


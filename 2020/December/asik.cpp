///*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;



int main()
{
 //O_O ;
   int n;
   cin>>n;
   string s;cin>>s;
   int ans=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]==s[i-1]&&s[i-1]==s[i]&&s[i-2]==s[i]&&s[i]==s[i-4]&&i-4>=0)
       {
           int temp=s[i]-'0';

           temp*=10000;
           ans+=temp;
       }
       else  if(s[i]==s[i-1]&&s[i-1]==s[i-2]&&s[i-2]==s[i-3]&&i-3>=0)
       {
           int temp=s[i]-'0';

           temp*=1000;ans+=temp;
       }
        else  if(s[i]==s[i-1]&&s[i]==s[i-2]&&i-2>=0)
       {
           int temp=s[i]-'0';

           temp*=100;ans+=temp;
       }

         else  if(s[i]==s[i-1]&&i-1>=0)
       {
           int temp=s[i]-'0';

           temp*=10;ans+=temp;
       }
       else
        ans+=s[i]-'0';



       }

       cout<<ans<<endl;




    return 0;
}




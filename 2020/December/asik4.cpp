///*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;cin>>s;
  int temp1=0,temp2=0;
  string s1,s2;
  int ans=0,ans2=0;
  for(int i=0;i<s.size();i++)
  {
      int x=s[i]-'0';
      //cout<<x<<nn;
      if(x>=0&&x<=9)
      {
          s1+=s[i];
          ans+=i;
      }
      else{
        s2+=s[i];ans2+=i;}


  }
  cout<<ans2<<" "<<ans<<endl;
  if(ans2>ans){
  cout<<"Unsorted: "<<s1<<s2<<endl;
  sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
cout<<"Sorted: "<<s1<<s2<<endl;
  }
  else{
  cout<<"Unsorted: "<<s2<<s1<<endl;
  sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
cout<<"Sorted: "<<s2<<s1<<endl;
  }

    return 0;
}


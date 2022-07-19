
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;


 string findsum(string str1,string str2){
     //Before proceeding further
     //make sure of str2 is larger
   if(str1.length()>str2.length())
    swap(str1,str2);

    //take an empty string for sum
    string str="";

    //calculate the length og both string
    ll n1=str1.length(),n2=str2.length();
    ll diff=n2-n1;

    //intially take carry
    int carry=0;
    //traverse from both of the end
    for(ll i=n1-1;i>=0;i--){
       // do school math ,coumpute the sum
       //current digits and carry
       ll sum=((str1[i]-'0')+(str2[i+diff]-'0')+carry);
       str.push_back(sum%10+'0');
       carry=sum/10;
}
    //add remaing digits of str2
    for(ll i=n2-n1-1;i>=0;i--){
        ll sum=(str2[i]-'0')+carry;
        str.push_back(sum%10+'0');
        carry=sum/10;

}
     //add remainig carry
if(carry){

        str.push_back(carry+'0');

//cout<<carry<<nn;


  }      //reverse resulting str
  reverse(str.begin(),str.end());

  return str;






 }


int main()
{
 O_O ;
   string s1,s2,s;
   string ans="";

   while(cin>>s1) {
  if((s1=="0"))
    break;


     else{
           s=findsum(ans,s1);
         //strcpy(ans,s);
         ans=s;
}
}
  if(ans[0]=='0')
    cout<<" "<<nn;
else

cout<<ans<<nn;


    return 0;
}

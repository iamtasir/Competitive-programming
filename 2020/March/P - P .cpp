#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
//#define sort(x) sort(x.begin(), x.end())
#define MAX 1000005
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        string s,x,ans,ans2;cin>>s;
        x=s;
      reverse(x.begin(),x.end());
        ll count=1;
        ans=findSum(s,x);
        //string temp[100];
       //   temp[0]=isPalindrome(ans);
        ll   l = ans.length();
       ll temp=0;
        for(int i=0;i < l ;i++)
        {
                if(ans[i] != ans[l-i-1])
                {
                        temp = 1;
                        break;
                }
        }
        if(temp==0)
            cout<<1<<ss<<ans<<nn;
        else
        {
            while(temp)
            {
                 x=ans;
              reverse(x.begin(),x.end());
            ans2=findSum(ans,x);
            //temp=isPalindrome(ans);
         //   ans2
         l =ans2.length();
              for(int i=0;i < l ;i++){
                if(ans2[i] != ans2[l-i-1]){
                 temp = 1;
                break;
                }
                else
                    temp=0;

                }
                count++;
                ans=ans2;
                //cout<<count<<nn;

                 if(temp==0){
              cout<<count<<ss<<ans<<nn;
              break;
                }
    }
}




   }


    return 0;
}

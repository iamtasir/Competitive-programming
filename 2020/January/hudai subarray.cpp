#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
//#define         arsize(a)       (sizeof(a)/sizeof(a[0]))
#define        arsize(a)            (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;

// Computes sum all sub-array
long int SubArraySum(int arr[], int n)
{
    long int result = 0;

    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // sum subarray between current
            // starting and ending points
            for (int k=i; k<=j; k++)
                result += arr[k] ;
        }
    }
    return result ;
}

// driver program to test above function
int main()
{
    int arr[] = {1, 2, 3} ;
    int n = arsize(arr);
    cout<<n<<endl;
    cout << "Sum of SubArray : "
          << SubArraySum(arr, n) << endl;
    return 0;
}

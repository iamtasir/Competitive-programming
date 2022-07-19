#include<iostream>
#define ll long long int
using namespace std;
void primeFact(ll n)
{
    int count=0;
    while(n%2==0)
    {
        n /= 2;
        count++;
    }
    if(count>0)
    {
        cout<<"2^"<<count<<" ";
    }
    for(ll i=3; i*i<=n; i+=2)
    {
        count=0;
        while(n%i==0)
        {
            n /= i;
            count++;
        }
        if(count>0)
        {
            cout<<i<<"^"<<count<<" ";
        }
    }
    if(n>1)
    {
        cout<<n<<"^1\n";
    }
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(!n){
            break;
        }
        primeFact(n);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000]= {0};
    int m=0,y=0;
    while(1)
    {
        m++;
        string s;
        cin>>s;
        int i=0,j=0,c,k=0;
        if(s=="0")
        {
            if(arr[0]==0)
            {
                cout<<" "<<endl;
                return 0;
            }
            for(i=0; i<y; i++)
                cout<<arr[i];
            cout<<endl;
            return 0;
        }
        int l=s.size();
        int ar[100000];
        int x=y-1;
        for(i=l-1; i>=0; i--)
        {
            if(x==-1)
            {
                x=0;
                arr[0]=0;
            }
            c=s[i]-48;
            ar[j++]=(arr[x]+c+k)%10;
            k=(c+k+arr[x])/10;
            x--;

        }
        if(x>-1)
        {
            while(x>-1)
            {
                ar[j++]=(arr[x]+k)%10;
                k=(arr[x]+k)/10;
                x--;
            }
        }
        if(k)
            ar[j++]=k;
        y=0;
        for(i=j-1; i>=0; i--)
        {
            arr[y++]=ar[i];
        }
    }
}

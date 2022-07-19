#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y,w;
    int a[30], b[30], c[30], h1, h2, h3, h[30];
    cin>>n>>x>>y;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>h1>>h2>>h3;
        if(h1>=h2 && h1>=h3)
        {
            h[i]=h1;
        }
        else if(h2>=h1 && h2>=h3)
        {
            h[i]=h2;
        }
        else if(h3>=h1 && h3>=h2)
        {
            h[i]=h3;
        }
    }
    for(int i=1; i<n; i++)
    {
        int mi = INT_MAX;
        int s, w, index, value1, value2;
        for(int j=1; j<n; j++)
        {
            if(h[j]!=0)
            {
                int temp1 = abs(b[j]-x);
                 temp1*=temp1;
                int temp2 = abs(c[j]-y);
                 temp2*=temp2;
                int temp3=sqrt(temp1+temp2);
                if(temp3<mi)
                {
                    mi=temp3;
                    s=a[j];
                    w=h[j];
                    index=j;
                    value1=b[j];
                    value2=c[j];
                }
            }
        }
        x=value1, y=value2;
        //x=b[j], y=c[j];
        h[index]=0;
        cout<<s<<" "<<w<<endl;
    }
    return 0;
}

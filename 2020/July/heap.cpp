#include<bits/stdc++.h>
using namespace std;
void min_heapify(int *ar,int i,int n)
{
    int j, temp;
    temp = ar[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && ar[j+1] < ar[j])
            j = j + 1;
        if (temp < ar[j])
            break;
        else if (temp >= ar[j])
        {
            ar[j/2] = ar[j];
            j = 2 * j;
        }
    }
    ar[j/2] = temp;
    return;
}
void build_minheap(int *ar, int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        min_heapify(ar,i,n);
    }
}
int main()
{
    int n,x,i;
    cout<<" number of char you want input "<<endl;
    cin>>n;
    char ch[n+10];
    int ar[n+10];
    for (i = 1; i <= n; i++)
    {
        cin>>ch[i];
        ar[i]=ch[i]-'0';
    }
    build_minheap(ar, n);
    cout<<"Minimum Heap"<<endl;
    for ( i = 1; i <= n; i++)
    {
         ch[i]=ar[i]+'0';

        cout<<ch[i]<<" ";
    }
    cout<<endl;

}

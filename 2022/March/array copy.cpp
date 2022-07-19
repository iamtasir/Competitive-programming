#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[100], array2[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> array1[i];
    // for(int i=0;i<n;i++)
    // {
    //     array2[i]=array1[i];
    // }
    //  for(int i=0;i<n;i++)
    //  {
    //      cout<<array2[i]<<"\n";
    //  }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array1[i] << "\n";
    }
}
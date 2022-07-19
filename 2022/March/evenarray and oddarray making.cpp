#include <bits/stdc++.h>
using namespace std;
int inputarray[100], evenarray[100], oddarray[100];
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> inputarray[i];
    }

    int evenarrayindex = 1, oddarrayindex = 1;

    for (int i = 1; i <= n; i++)
    {
        if (inputarray[i] % 2 == 0)
        {
            evenarray[evenarrayindex] = inputarray[i];
            evenarrayindex++;
        }
        else
        {
            oddarray[oddarrayindex] = inputarray[i];
            oddarrayindex++;
        }
    }

    for (int i = 1; i < evenarrayindex; i++)
    {
        cout << evenarray[i] << " ";
    }
    cout << "\n";

    for (int i = 1; i < oddarrayindex; i++)
    {
        cout << oddarray[i] << " ";
    }

    int evensum = 0;
    for (int i = 1; i < evenarrayindex; i++)
    {
        evensum = evensum + evenarray[i];
    }
    cout << "\n";
    cout << evensum << "\n";

    int ansarray[100];
    for (int i = 1; i < max(evenarrayindex, oddarrayindex); i++)
    {
        ansarray[i] = evenarray[i] + oddarray[i];
    }

    for (int i = 1; i < max(evenarrayindex, oddarrayindex); i++)
    {
        cout << ansarray[i] << " ";
    }
    cout << "\n";
}
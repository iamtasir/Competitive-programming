#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    int T;
    char str[1010];
    cin >> T;
    for (int j = 1; j <= T; j++)
    {
        cin >> str;
        cout << "Case " << j << ":" << endl;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '.')
                cout << "1-1 times\n";
            else if (str[i] == ',')
                cout << "1-2 times\n";
            else if (str[i] == '@')
                cout << "1-3 times\n";

            else if (str[i] == 'a')
                cout << "2-1 times\n";
            else if (str[i] == 'b')
                cout << "2-2 times\n";
            else if (str[i] == 'c')
                cout << "2-3 times\n";

            else if (str[i] == 'd')
                cout << "3-1 times\n";
            else if (str[i] == 'e')
                cout << "3-2 times\n";
            else if (str[i] == 'f')
                cout << "3-3 times\n";

            else if (str[i] == 'g')
                cout << "4-1 times\n";
            else if (str[i] == 'h')
                cout << "4-2 times\n";
            else if (str[i] == 'i')
                cout << "4-3 times\n";

            else if (str[i] == 'j')
                cout << "5-1 times\n";
            else if (str[i] == 'k')
                cout << "5-2 times\n";
            else if (str[i] == 'l')
                cout << "5-3 times\n";

            else if (str[i] == 'm')
                cout << "6-1 times\n";
            else if (str[i] == 'n')
                cout << "6-2 times\n";
            else if (str[i] == 'o')
                cout << "6-3 times\n";

            else if (str[i] == 'p')
                cout << "7-1 times\n";
            else if (str[i] == 'q')
                cout << "7-2 times\n";
            else if (str[i] == 'r')
                cout << "7-3 times\n";
            else if (str[i] == 's')
                cout << "7-4 times\n";

            else if (str[i] == 't')
                cout << "8-1 times\n";
            else if (str[i] == 'u')
                cout << "8-2 times\n";
            else if (str[i] == 'v')
                cout << "8-3 times\n";

            else if (str[i] == 'w')
                cout << "9-1 times\n";
            else if (str[i] == 'x')
                cout << "9-2 times\n";
            else if (str[i] == 'y')
                cout << "9-3 times\n";
            else if (str[i] == 'z')
                cout << "9-4 times\n";
        }
    }
}
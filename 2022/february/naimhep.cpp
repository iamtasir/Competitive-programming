#include <stdio.h>
//#include<string.h>
int main()
{

    char s[100][100];
    int numberofstring;
    scanf("%d", &numberofstring);
    for (int i = 0; i < numberofstring; i++)
        scanf("%s[^\n]", s[i]);
    int ans = 0;
    for (int i = 0; i < numberofstring; i++)
    {
        int stringsize = 0, notpalindrome = 0;
        for (int j = 0; s[i][j] != '\0'; j++)
            stringsize++;
        stringsize--;
        // printf("%d\n", stringsize);
        for (int j = 0; j < stringsize / 2; j++)
        {
            if (s[i][j] != s[i][stringsize - j])
            {
                notpalindrome = 1;
                break;
            }
        }
        if (notpalindrome == 1)
            ans -= 5;
        else
            ans += 10;
    }
    printf("ans = %d\n", ans);
    return 0;
}
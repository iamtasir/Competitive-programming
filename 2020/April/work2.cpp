#include <bits/stdc++.h>
using namespace std;
int xx[]= {0,0,1,1,-1,-1,1,-1}; //For 8 direction
int yy[]= {1,-1,1,-1,1,-1,0,0}; // For 8 direction

char s[105][105];
bool visit[105][105];
int ans;

int sx,sy,r;

void dfs(int ux,int uy)
{
    for(int i=0; i<8; i++)
    {
        int vx=ux+xx[i];
        int vy=uy+yy[i];

        if(vx<0 || vy<0 || vx>=r || vy>=r) continue;

        if(visit[vx][vy]==1 || s[vx][vy]=='0') continue;

        if(visit[vx][vy]==0)
        {
            visit[vx][vy]=1;

            dfs(vx,vy);
        }
    }
}


int main()
{
    int kase=0;
    while(scanf("%d", &r)==1)
    {
        ans=0;
        memset(visit,0,sizeof(visit));
        for(int i=0; i<r; i++)
        {
            scanf("%s",s[i]);
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<r; j++)
            {
                if(visit[i][j]==0 && s[i][j]=='1')
                {
                    visit[i][j]=1;
                    ans++;
                    dfs(i, j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++kase, ans);
    }
    return 0;
}

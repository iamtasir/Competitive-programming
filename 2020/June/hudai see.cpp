#include<bits/stdc++.h>

using namespace std;
int N;
int x[1010],y[1010];
vector<int>adj[1010];
int n=0;
bool vis[1010]={0};
void dfs(int u){
    vis[u]=true;
    int i;
    for(i=0;i<(int)adj[u].size();i++){
        if(!vis[adj[u][i]])dfs(adj[u][i]);
    }
}
int main(){
    int i,j,k;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d",x+i,y+i);
    }
    for( i=0;i<n;i++)
        cout<<x[i]<<endl;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(x[i]==x[j]||y[i]==y[j]){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    for(i=0;i<N;i++){
        if(!vis[i]){
            n++;
            dfs(i);
        }
    }
    printf("%d",n-1);
}

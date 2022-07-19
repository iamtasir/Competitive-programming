#include<bits/stdc++.h>
using namespace std;
int w[1000],p[1000],i;
double x[10000] ,n,m,u;
double knapsack(int m,int n){
for(int i=0;i<n;i++)
x[i]=0;
u=m;
for( i=0;i<n;i++){
if(w[i]>u)

break;
else{
x[i]=1.0;
u=u-w[i];
}
}
//cout<<i<<endl;
if(i<=n){
//cout<<(double)u/(double)w[i]<<endl;
x[i]=(double)u/(double)w[i];
}
for( i=0;i<n;i++)
return x[i];
}
int main(){
cin>>n;
for(i=0;i<n;i++)
cin>>w[i];
cin>>m;
knapsack(m,n);
for(i=0;i<n;i++)
cout<<x[i]<<" ";
return 0;
}


/*
n=7
weight
1 2 3 4 5 6 7
15
*/

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int count=0;
    while(n){
        count+=n&1;
        n>>=1;
    }
    return count;
}
int main(){
  int i,a[10^6];
for(i=0;i<(2*10^5);i++)
    a[i]=countSetBits(i);
for(i=0;i<10;i++)
cout<<a[i]<<" ";
}

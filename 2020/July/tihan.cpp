#include<bits/stdc++.h>
using namespace std;
void minheap(char  *a,int b,int n){
   int j,temp;
   temp=a[b]-'0';
   j=2*b;
   while(j<=n){
      if(j<n && a[j+1]-'0'<a[j]-'0')
         j=j+1;
      if(temp<a[j]-'0')
         break;
      else if(temp>=a[j]-'0'){
         a[j/2]=a[j];
         j=2*j;
      }
   }
   a[j/2]=temp+'0';
   return;
}
void build(char *a,int n) {
   int k;
   for(k=n/2;k>=1;k--){
      minheap(a,k,n);
   }
}
int main(){
   int n,i,c=0;
   char a[100]={'B','C','A'};
for(i=0;a[i]!='\0';i++)
        c++;

    cout<<c<<endl;

   build(a,2);
   cout<<"Min Heap :";
   for (i=0;i<3;i++){
      cout<<a[i]<<" ";
   }
   return 0;
}

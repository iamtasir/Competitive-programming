#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int t;
    cin>>t;
    while(t--){
    cin>>a;
    int l,i,j,c=0,x=0,y=0;
    l=a.length();
    for(i=0;i<l;i++){
        if(a[i]=='(')
            x++;
        else if(a[i]==')'){
            if(x>0){
                x--;
            c++;}
        }
       else  if(a[i]=='[')
            y++;
        else if(a[i]==']'){
            if(y>0){
                y--;
            c++;}
        }
      //  cout<<c<<endl;
    }
    cout<<c<<endl;
    }
    return 0;
}

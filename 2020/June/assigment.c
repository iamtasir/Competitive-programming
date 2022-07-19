#include<bits/stdc++.h>
using namespace std;
int main()
{

  string s,str;
   while(cin>>s){
       char c=s[0];
        str.erase(remove(str.begin(), str.end(),c), str.end());
        str+=s;
    for(int i=0;i<str.size();i++)
            cout<<str[i]<<" ";
      cout<<endl;
}


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<vector<int> > a;

        for(int i = 0 ; i < n ; i++){
            vector<int> b;
            int p, c;
            cin >> p >> c;
            b.push_back(p);
            b.push_back(c);
            a.push_back(b);
        }
        int index = -1;
        int temp1;
        int temp2;
        bool defeat  = true;
        for(auto i: a){
            if(index == -1){
                temp1 = i[0];
                temp2 = i[1];
                if(temp1 < temp2){
                    defeat = false;
                    break;
                }
                index = 0;
                continue;
            }
            if(i[0] >= i[1] && temp1 <= i[0] && temp2 <= i[1]){
                if(i[0] - temp1 < i[1] - temp2){
                    defeat = false;
                    break;
                }
                else{
                    temp1 = i[0];
                    temp2 = i[1];
                }
            }
            else{
                defeat = false;
                break;
            }

        }
        if(defeat){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

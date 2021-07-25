#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<string> s = {"H","2B","3B","HR"};
    vector<int> k(4,0);

    vector<string> t(4);
    for(int i = 0;i < 4;i++){
        cin >> t[i];
    }

    for(int i = 0;i < 4;i++){
        for(int y = 0;y < 4;y++){
            if(t[i] == s[y]){
                k[y]++;
            }
        }
    }

    for(int i = 0;i < 4;i++){
        if(k[i] == 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
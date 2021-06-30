#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> s(n,vector<int>(n,0));
    vector<vector<int>> t(n,vector<int>(n,0));

    for(int i = 0;i < n;i++){
        cin >> s[i][0] >> s[i][1];
    }
    for(int i = 0;i < n;i++){
        cin >> t[i][0] >> t[i][1];
    }

    
}
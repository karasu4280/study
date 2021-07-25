#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main (){
    string s,t;
    cin >> s;
    t = "qchokudai";
    
    s = "q" + s;
    long long int y = s.size();

    vector<vector<long long int>> dp(y,vector<long long int>(10,0));

    dp[0][0] = 1;
    for(int i = 1;i < y;i++){
        for(int j = 0;j <= 8;j++){
            if(j == 0){
                dp[i][j] = 1;
                continue;
            }
            if(s[i] == t[j]){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                dp[i][j] = dp[i][j] % MOD; 
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[y-1][8] << endl;
    return 0;
}
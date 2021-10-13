#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main  (){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<long long int>> dp(100010,vector<long long int>(10,0)); 

    //i文字目にatcoderのj番目まで完成している形



    for(int i = 0;i <= n;i++){
        for(int j = 0;j < 7;j++){
            if(i == 0){
                dp[i][j] = 0;
                continue;
            }
            
            if(j == 0){
                if(s[i-1] == 'a'){
                    dp[i][j] = dp[i-1][j] + 1;
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
            
            if(j == 1){
                if(s[i-1] == 't'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }

            if(j == 2){
                if(s[i-1] == 'c'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }

            if(j == 3){
                if(s[i-1] == 'o'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }

            if(j == 4){
                if(s[i-1] == 'd'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }

            if(j == 5){
                if(s[i-1] == 'e'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }

            if(j == 6){
                if(s[i-1] == 'r'){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
            dp[i][j] = dp[i][j] % MOD;
        }
    }

    cout << dp[n][6] << endl;
    return 0;
}
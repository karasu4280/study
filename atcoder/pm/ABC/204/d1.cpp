#include<bits/stdc++.h>
using namespace std;



int main (){
  int n;
  cin >> n;
  vector<int> t(n,0);
  long long int sumall = 0,ming = 100000;

  for(int i = 0;i < n;i++){
    cin >> t[i];
    sumall += t[i];
  }

  sort(t.begin(),t.end());

  vector<vector<long long int>> dp(n,vector<long long int>(sumall,0));

  for(int i = t[0];i < sumall;i++){
    dp[0][i] = t[0];
  }

  for(int i = 1;i < n;i++){
    for(int k = 1;k < sumall;k++){
      if(t[i] <= k){
        dp[i][k] = max(dp[i-1][k-t[i]]+t[i],dp[i-1][k]);
      }else{
        dp[i][k] = dp[i-1][k];
      }
    }
  }

  /*for(int i = 0;i < sumall;i++){
    cout << dp[n-1][i] << " ";
  }
  return 0;*/

  for(int i = 1;i < sumall;i++){
    long long int sum1 = sumall;
    if(max(sum1-dp[n-1][i],dp[n-1][i]) < ming){
      ming = max(sum1-dp[n-1][i],dp[n-1][i]);
    }
  }  
  cout << ming << endl;
  return 0;

}

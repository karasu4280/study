#include<bits/stdc++.h>
using namespace std;

int main (){
  int h,w;
  cin >> h >> w;
  vector<vector<long long int>> a(h,vector<long long int>(w,0));
  vector<long long int> ww(h,0);
  vector<long long int> hw(w,0);
  vector<vector<long long int>> ans(h,vector<long long int>(w,0));

  for(int i = 0;i < h;i++){
    for(int k = 0;k < w;k++){
      cin >> a[i][k];
      hw[k] += a[i][k];
      ww[i] += a[i][k];
    }
  }

  for(int i = 0;i < h;i++){
    for(int k = 0;k < w;k++){
      ans[i][k] += hw[k] + ww[i];
      ans[i][k] -= a[i][k];
    }
  }
  for(int i = 0;i < h;i++){
    for(int k = 0;k < w;k++){
      cout << ans[i][k] << " ";
    }
    cout << endl;
  }
  return 0;
}

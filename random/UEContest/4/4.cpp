#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int n,x;
  cin >> n >> x;
  vector<pair<long long int,long long int>> a(n,{0,0});
  long long int ans = 0;

  for(int i = 0;i < n;i++){
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(),a.end());

  for(int i = 0;i < n;i++){
    if(x >= a[i].second){
      ans += a[i].first * a[i].second;
      x -= a[i].second;
    }else{
      ans += a[i].first * x;
      x = 0;
    }
    if(x == 0){
      break;
    }
  }
  cout << ans << endl;
  return 0;
}

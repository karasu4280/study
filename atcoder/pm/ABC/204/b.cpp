#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;
  long long int ans = 0;
  vector<int> a(n,0);
  for(int i = 0;i < n;i++){
    cin >> a[i];
    if(a[i] > 10){
      ans += a[i] - 10;
    }
  }
  cout << ans << endl;
  return 0;


}

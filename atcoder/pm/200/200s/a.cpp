#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  int ans = 0;
  cin >> n;

  while(n > 0){
    ans++;
    n = n-100;
  }

  cout << ans;
  return 0;
}

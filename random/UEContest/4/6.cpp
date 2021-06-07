#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main (){
  long long int n,m;
  cin >> n >> m;
  long long int ans = 0,t = 1,l,q;

  for(int i = 0;i <= m;i++){
    t = 1+i;
    l = 1;
    for(int i = 0;i < n-1;i++){
      for(int k = 0;k <= i;k++){
        l = l*t;
        q = l / MOD;
        l = l - q*MOD;
      }
    }
    ans += l;
    q = ans / MOD;
    ans = ans - q*MOD;
  }
  cout << ans << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int n,ans = 2,t;
  cin >> n;

  if(n % 2 == 0){
    for(int i = 3;i <= sqrt(n);i = i+2){
      t = n;
      while(t % i == 0){
        ans = ans +2;
        t = t / i;
      }
    }
  }

  cout << ans << endl;
  return 0;
}

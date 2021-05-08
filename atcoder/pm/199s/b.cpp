#include<bits/stdc++.h>
using namespace std;

int main (){
  int n,k=0,pmax=0;
  cin >> n;
  vector<int> a(n,0);
  vector<int> b(n,0);
  vector<int> ans(1005,0);

  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = 0;i < n;i++){
    cin >> b[i];
  }

  for(int i = 0;i < n;i++){
    a[i]--;
    b[i]--;
    if(a[i] != 0){
      ans[a[i]]++;
    }
    if(b[n] != 999){
      ans[b[i]+1]--;
    }
  }
  for(int i = 0;i <1005;i++){
    ans[i+1] = ans[i+1] + ans[i];
    //cout << ans[i+1];
  }

  for(int i = 0;i < 1005;i++){
    if(ans[i] >= pmax){
      pmax = ans[i];
    }
  }
  for(int i = 0;i < 1005;i++){
    if(ans[i] == pmax){
      k++;
    }
  }
  if(k > n){
    k = 0;
  }
  cout << k << endl;
  return 0;
}

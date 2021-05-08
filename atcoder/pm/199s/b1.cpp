#include<bits/stdc++.h>
using namespace std;

int main (){
  int n,k=0;
  cin >> n;

  vector<int> a(n,0);
  vector<int> b(n,0);
  vector<int> ans(1000,0);

  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = 0;i < n;i++){
    cin >> b[i];
  }

  for(int i = 0;i < n;i++){
    for(int k = a[i]-1;k <= b[i]-1;k++){
      ans[k]++;
    }
  }

  for(int i= 0;i < 1000;i++){
    if(ans[i] == n){
      k++;
    }
  }
  cout << k << endl;
  return 0;

}

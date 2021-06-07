#include<bits/stdc++.h>
using namespace std;

int main (){
  string q;
  long long int n;

  cin >> q;
  cin >> n;

  long long int k,j,cnt = 0,min = 10000,z;

  k = q.size();
  vector<int> s(k,0);
  vector<int> m(k,0);
  for(int i = 0;i < k;i++){
    s[i] = q[i] - '0';
    m[i] = s[i];
  }

  vector<long long int> t(k,0);

  for(int bit = 0;bit < (1 << k);bit++){
    cnt = 0;
    for(int i = 0;i < k;i++){
      s[i] = m[i];
    }
    j = 1;
    for(int i = 0;i < k;i++){
      if(bit & (1 << i)){
        cnt++;
        if(s[i] == 6){
          s[i] = 9;
        }else{
          s[i] = 6;
        }
      }
    }
    for(int i = k-1;i >= 0;i--){
      t[i] = s[i]*j;
      z = t[i]/n;
      t[i] = t[i] - z*n;
      j = j*10;
      z = j/n;
      j = j - z*n;
    }
    j = 0;
    for(int i = 0;i < k;i++){
      j += t[i];
      z = j/n;
      j = j - z*n;
    }
    if(j % n == 0){
      if(cnt <= min){
        min = cnt;
      }
    }
  }
  if(min > 2000){
    cout << "-1" << endl;
  }else{
    cout << min << endl;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int count = 0;
  vector<int> k(200000,0);
  vector<int> l(200000,0);
  vector<int> o(2019,0);
  cin >> s;
  int t = s.size();
  int i = t-1,a = 1;
  while(i >= 0){
    int y;
    y = s[i] - '0';
    y = (y * a)% 2019;
    k[i] = y;
    l[i] = y;
    a = (a*10) % 2019;
    i--;
  }
  /*for(int b = t-1;b >= 0;b--){
    cout << l[b] << endl;
  }*/

  i = 1;
  o[l[t-1]]++;
  while(i < t){
    l[t - i -1] += l[t - i];
    l[t-i-1] = l[t-i-1]% 2019;
    o[l[t-i-1]]++;
    i++;
  }

  for(int h = 0;h < 2019;h++){
    count += o[h] * (o[h]-1) / 2;
  }
  count += o[0];

  /*for(int b = t-1;b >= 0;b--){
    cout << l[b] << endl;
  }*/

  /*for(int b = t-1;b >= 0;b--){
    for(int c = b-1;c >= 0;c--){
      if(l[b] == l[c]){
        count++;
      }
    }
  }

  for(int b = t-1;b >= 0;b--){
    if(l[b] == 0){
      count++;
    }
  }*/

  cout << count << endl;
  return 0;
}

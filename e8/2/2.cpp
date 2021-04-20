#include<bits/stdc++.h>
using namespace std;

int main(){
  int right,left,k;
  cin >> k;

  string s;
  for(int i = 0;i < k;i++){
    s += '1';
  }

  for(int bit = 0;bit < (1<<k);bit++){
    left = 0;
    right = 0;
    for(int i = k - 1;i >= 0;i--){
      if(bit & (1 << i)){
        right++;
      }else{
        left++;
      }
      if(right > left){
        break;
      }
    }
    //cout << bitset<8>(bit) << endl;
    if(right == left){
      for(int i = k-1;i >= 0;i--){
        if(bit & (1 << i)){
          s[i] = '(';
        }else{
          s[i] = ')';
        }
      }
      s[k] = '\0';
      cout << s << endl;
    }
  }
  return 0;
}

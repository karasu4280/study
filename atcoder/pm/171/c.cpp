#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int n;
  vector<int> k(1000,0);
  vector<char> s(1000,0);
  int t;

  cin >> n;
  int i = 0;
  while(n){
    i++;
    k[1000-i] = n%26;
    n = n/26;
  }
  t = i;/*atamanobasyo*/
  /*for(int j = 0;j < 1000;j++){
    cout << k[j]<< endl;
  }
  cout << endl;*/
  i = 1;
  while(i < t){
    if(k[1000-i] == 0){
      k[1000-i] += 26;
      int j = i+1;
      while(j <= t){
        if(k[1000-j] == 0){
          k[1000-j] += 25;
          j++;
        }else{
          k[1000 - j]--;
          j = j+t;
        }
      }
    }
    s[1000-i] = 96+k[1000-i];
    i++;
  }
  /*i = t notoki*/
if(k[1000-i] != 0){
  s[1000-i] = 96+k[1000-i];
}else{
  t--;
}

  /*for(int j = 0;j < 10;j++){
    cout << k[j];
  }
  cout << endl;*/
  //cout << t << endl;
  for(int j = 1000-t;j < 1000;j++){
    //cout << j << endl;
    cout << s[j];
  }
  return 0;
}

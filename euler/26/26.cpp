#include<bits/stdc++.h>
using namespace std;


int main (){
  int max = 0,ans = 0;


  for(int i = 3;i < 1000;i = i+2){
    int tmp = 1,key = 0,a,b;
    vector<int> s(20000,0);
    vector<int> l(10,0);
    for(int k = 0;k < 20000;k++){
      if(tmp >= i){
        b = 0;
        do{
          tmp = tmp - i;
          b++;
        }while(tmp >= i);
        s[k] = b;
      }else{
        s[k] = 0;
      }
      if(tmp == 0){
        break;
      }
      tmp = tmp * 10;
      l[s[k]]++;
      if(key != 0){
        if(s[k] == key){
          //cout << i<< endl <<a << endl << k << endl;
          a = k - a;
          if(a >= max){
            max = a;
            ans = i;
          }
          break;
        }
      }
      if(k > 16000){
        if(key == 0){
          int c = 0;
          for(int m = 0;m < 10;m++){
            if(l[m] > c){
              c = l[m];
              key = m;
              a = k;
            }
          }
          for(int m = 0;m < 10;m++){
            if(m == key){
              continue;
            }
            if(c == l[m]){
              key = 0;
            }
          }
        }
      }
    }
    /*for(int k = 0;k < 10;k++){
      cout << s[k];
    }
    cout << endl;*/
  }
  cout << ans << endl;
  cout << max <<endl;
  return 0;
}

/*1ru-pu hukusuu no suuzi syori dekinai*/

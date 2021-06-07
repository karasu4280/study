#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int a,b,x,y;
  cin >> a >> b;
  if(a > 0){
    x = 1;
  }else if(a == 0){
    x = 0;
  }else{
    x = -1;
  }
  if(b > 0){
    y = 1;
  }else if(b == 0){
    y = 0;
  }else{
    y = -1;
  }

  if(x != y){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main (){
  int a,b,c;

  cin >> a >> b >> c;

  a = a*a;
  b = b*b;
  c = c*c;

  if(a+b < c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
